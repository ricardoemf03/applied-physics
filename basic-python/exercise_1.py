# -*- coding: utf-8 -*-
"""exercise_1.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1nb3hQfEu2P-scNoI6O_l20W6iA4hP-5W
"""

import math
conv = math.pi/180

#Clase padre:
class Tiempo:
  def __init__(self, vi:float, ang:float, grav:float):
    self.velocidadinicial= vi #Velocidad inicial en m/s.
    self.anguloincial= ang #Ángulo en grados sexagesimalees.
    self.gravedad= grav #Gravedad en m/s^2.
  def calculotiempo(self):
    #Aqui se calcula el tiempo en alcanzar la altura máxima.
    t_medios = (self.velocidadinicial*math.sin(self.anguloincial*conv))/self.gravedad
    return t_medios

t = Tiempo(11,20,9.8)
print("Tiempo en alcanzar altura máxima:",round(t.calculotiempo(),2),"segundos")

#Composición
class TiempoTotal:
    def __init__(self, vi:float, ang:float, grav:float):
          self.velocidadinicial= vi
          self.anguloincial= ang
          self.gravedad= grav
          self.tiempot = Tiempo(vi,ang,grav)
    def tiempototal(self):
      t_total = 2*self.tiempot.calculotiempo()
      return t_total

tt = TiempoTotal(11,20,9.8)
print("Tiempo total de vuelo:",round(tt.tiempototal(),2), "segundos")

#Clase hijo no. 1, realiza la misma función que la composición anterior.
class TiempoTotal(Tiempo):
    pass
    def tiempototal(self):
      t_total = 2*self.calculotiempo()
      return t_total
    def respuesta(self):
      print("El tiempo de vuelo es:",round(tt.tiempototal(),2),"segundos")

tt = TiempoTotal(11,20,9.8)
tt.respuesta()

#Clase hijo no. 2
class Altura(Tiempo):
    pass
    def alturamaxima(self):
      ymax = (1/2)*self.velocidadinicial*(math.sin(self.anguloincial*conv))*self.calculotiempo()
      return ymax
    def respuesta(self):
      print("La altura máxima es",round(y.alturamaxima(),2),"metros")

y = Altura(11,20,9.8)
y.respuesta()

#Clase hijo no. 3
class Alcance(Tiempo):
  pass
  def alcance(self):
    x = 2*self.velocidadinicial*math.cos(self.anguloincial*conv)*self.calculotiempo()
    return x
  def respuesta(self):
      print("El alcance horizontal es:",round(d.alcance(),2),"metros")

d = Alcance(11,20,9.8)
d.respuesta()

#Polimorfismo
y = Altura(11,20,9.8)
d = Alcance(11,20,9.8)
tt = TiempoTotal(11,20,9.8)
for z in (y,d,tt):
  z.respuesta()