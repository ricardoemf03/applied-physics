import sys
from paa01 import paaFile
import numpy as np
import matplotlib.pyplot as plt

# Abrir archivo paa
if len(sys.argv) < 2:
    print("No filename given")
    sys.exit()

DataFile = paaFile(sys.argv[1])

ps = DataFile.paaGetPulseSize()     # Número de puntos por pulso (eje x va de 0 a ps-1)
pc = DataFile.paaGetPulseCount()    # Número total de pulsos en el archivo

print("Pulsos totales:", pc)
print("Puntos por pulso:", ps)

# Umbral de doble pulso
threshold = -300

# Guardamos los pulsos con doble caída
double_pulse_data = []

for i in range(pc):
    y = np.array(DataFile.paaGetPulseRP(i))  # Obtener señal del pulso
    
    # Detectar los puntos donde la señal baja de -150
    below_thresh = np.where(y < threshold)[0]

    # Verificar si hay al menos 2 regiones separadas
    if len(below_thresh) >= 2:
        # Para considerar que son dos pulsos separados, los índices deben estar alejados
        if np.max(np.diff(below_thresh)) > 50:  # puedes ajustar el 50 si hace falta
            double_pulse_data.append(y)

# Guardar los datos en un archivo .npz (puedes luego convertirlo a CSV si quieres)
np.savez("double_pulses.npz", *double_pulse_data)
print(f"{len(double_pulse_data)} pulsos con doble caída guardados.")

# Visualizar los primeros 5 pulsos guardados
for i in range(min(5, len(double_pulse_data))):
    plt.plot(double_pulse_data[i])
    plt.title(f"Doble pulso")
    plt.xlabel("No. de mediciones")  # Etiqueta para el eje x
    plt.ylabel("V") 
    plt.show()
