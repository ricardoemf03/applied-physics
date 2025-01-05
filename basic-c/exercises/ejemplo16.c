#include <stdio.h>
#include <stdlib.h>
#include "ejemplo16_1.h"

int main(int argc, char** argv)
{
    if(argc<2)
    {
        printf("\nUsage: %s n\n\tn: Numero de lanzamientos de 10 monedas.\n\n",argv[0]);
        return 0;
    }

    int n = atoi(argv[1]);
    if(  n  > 0 )
    {
        /* Simulacion de lanzar 10 monedas al aire n veces */
        int resultados[11] = {0};

        for(int i = 0; i < n ; i++)
            resultados[ k_monedas(10) ]++;

        /* Impresion en pantalla de resultados */

        for(int i = 0; i < 11; i++)
            printf(" %i - %i \n", i, resultados[i]);
    }
    else
        printf("\nEl numero debe se mayor que cero\n");
    return 0;

}