#include "stdio.h"

struct  mi_estructura_t
{
    int     entero;
    float   flotante;
    char    caracter;
};

int main()
{
    const int n=10;

    struct mi_estructura_t estructura_inst;
    struct mi_estructura_t estructura_arreglo[n];
    

    estructura_inst.entero = 1;
    estructura_inst.flotante = 3.14;
    estructura_inst.caracter = 'a';

    printf("(main) estructura_inst.entero = %i\n",estructura_inst.entero);
    printf("(main) estructura_inst.flotante = %f\n",estructura_inst.flotante);
    printf("(main) estructura_inst.caracter = %c\n",estructura_inst.caracter);
    printf("(main) Espacio en memoria de estructura_inst: %ld bytes\n", sizeof(estructura_inst));

    for( int i = 0 ; i < n ; i++ )
    {
        estructura_arreglo[i].entero = i;
        estructura_arreglo[i].flotante = 3.14/i;
        estructura_arreglo[i].caracter = i+65;
    }
    
    for( int i = 0 ; i < n ; i++ )
    {
        printf("(main) estructura_arreglo[%i].entero = %i\n",i,estructura_arreglo[i].entero);
        printf("(main) estructura_arreglo[%i].flotante = %f\n",i,estructura_arreglo[i].flotante);
        printf("(main) estructura_arreglo[%i].caracter = %c\n",i,estructura_arreglo[i].caracter);
    }

    
    printf("(main) Espacio en memoria de estructura_arreglo: %ld bytes\n", sizeof(estructura_arreglo));

    return 0;
}