#include "stdio.h"

int main()
{
    struct
    {
        int     entero;
        float   flotante;
        char    caracter;
    } mi_estructura;

    mi_estructura.entero = 1;
    mi_estructura.flotante = 3.14;
    mi_estructura.caracter = 'a';

    printf("(main) mi_estructura.entero = %i\n",mi_estructura.entero);
    printf("(main) mi_estructura.flotante = %f\n",mi_estructura.flotante);
    printf("(main) mi_estructura.caracter = %c\n",mi_estructura.caracter);
}