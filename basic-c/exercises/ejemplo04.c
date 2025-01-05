#include "stdio.h"

int main()
{
    int entero;
    short entero_corto;
    long entero_largo;

    float flotante;
    double flotante_doble_presicion;

    char caracter;

    unsigned short int corto_positivo;

    printf("Memoria ocupada por int %ld bytes\n",sizeof(entero));
    printf("Memoria ocupada por short %ld bytes\n",sizeof(entero_corto));
    printf("Memoria ocupada por long %ld bytes\n",sizeof(entero_largo));
    printf("Memoria ocupada por float %ld bytes\n",sizeof(flotante));
    printf("Memoria ocupada por double %ld bytes\n",sizeof(flotante_doble_presicion));
    printf("Memoria ocupada por char %ld bytes\n",sizeof(caracter));

    return 0;
}