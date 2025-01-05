#include "stdio.h"

int main()
{
    int arreglo_enteros_01[5]={1,2,3,4,5};

    const int n=15;

    int arreglo_enteros_02[n];

    printf("Memoria ocupada por arreglo_enteros_01 %ld bytes\n",sizeof(arreglo_enteros_01));
    for(int i = 0; i<5 ; i++ )
        printf("Valor de la posición arreglo_enteros_01[ %i ] = %i \n", i, arreglo_enteros_01[i]);

    
    printf("Memoria ocupada por arreglo_enteros_02 %ld bytes\n",sizeof(arreglo_enteros_02));
    for(int i = 0; i<n ; i++ )
        printf("Valor de la posición arreglo_enteros_02[ %i ] = %i \n", i, arreglo_enteros_02[i]);

    return 0;
}