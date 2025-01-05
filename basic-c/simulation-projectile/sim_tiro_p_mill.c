#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//funcion para generar numeros aleatorios entre 0 y 1 sin incluirlos
double Nrandom() {
    return (rand() % (RAND_MAX - 1) + 1) / (RAND_MAX + 0.0);
}
int main(){
    srand(2);
    int N=1000000; // repeticiones
    const int bins = 6; // numero de bins
    int hist[bins];
    // Todos los datos en el SI con el angulo en radianes
    float y_0=10, x=20, v_0=12, delta_v0=0.2, theta= 0.611, delta_theta = 0.001;
    float media=0.0, desv=0.0, acum=0.0, sum_mean_sqr=0.0;
    double *r_i = (double *) malloc(N * sizeof(double));
    double *q_i = (double *) malloc(N * sizeof(double));
    double *v_i = (double *) malloc(N * sizeof(double));
    double *theta_i = (double *) malloc(N * sizeof(double));
    double *y_f = (double *) malloc(N * sizeof(double));
    //inicializar a cero 
    for (int i=0; i< N; i++){
        r_i[i]=0;
        q_i[i]=0;
        v_i[i]=0;
        theta_i[i]=0;
    }
    //generar lista de numero aleatorios uniformemente distribuidos
    for (int i = 0; i < N; i++) {
        r_i[i] = Nrandom();
        q_i[i] = Nrandom();
    }
    //aplicar transformacion para distribucion normal de numeros
    for (int i = 0; i < N; i++) {
        v_i[i] = v_0 + delta_v0 * sqrt(-2 * log(r_i[i])) * cos(2 * 3.141592 * q_i[i]);
        theta_i[i] = theta + delta_theta * sqrt(-2 * log(r_i[i])) * sin(2 * 3.141592 * q_i[i]);
    }
    //calcular posicion final N veces
    for (int i = 0; i < N; i++){
        y_f[i] = y_0 + x * tan(theta_i[i])- 0.5 * 9.8 * ((x * x)/(v_i[i] * v_i[i] * cos(theta_i[i]) *cos(theta_i[i])));
        //calcular la media de posiciones finales
        acum += y_f[i];
    }
    media = acum/(N+0.0);
    for (int i=0; i < N; i++){
        sum_mean_sqr += pow(y_f[i]-media, 2);
    }
    desv = sqrt(sum_mean_sqr/(N-1.0));

    printf("media: %f desviacion: %f\n", media, desv);
    //inicializar a cero los bins
    for(int i = 0 ; i < bins ; i++){
        hist[i] = 0;
    }
    //determinar que cantidad de datos caen en cada bin
    for (int i=0; i < N; i++){
        if(y_f[i] <= (media - 2 * desv)) {
            hist[0]++;
        } else if(y_f[i] > (media - 2 * desv) && y_f[i] <= (media - desv)) {
            hist[1]++;
        } else if(y_f[i] > (media - desv) && y_f[i] <= media) {
            hist[2]++;
        } else if(y_f[i] > media && y_f[i] <= (media + desv)) {
            hist[3]++;
        } else if(y_f[i] > (media + desv) && y_f[i] <= (media + 2 * desv)) {
            hist[4]++;
        } else if(y_f[i] > (media + 2 * desv)) {
            hist[5]++;
        } else {
            printf("Error al categorizar el numero\n");
        }
    }
    //imprimir el histograma
    for(int i = 0 ; i < bins ; i++){
        printf("%d       %d\n", i+1, hist[i]);    
    }
        
        


    free(r_i);
    free(q_i);
    free(v_i);
    free(theta_i);
    free(y_f);

    return 0;
}