#include "stdio.h"

int main()
{
    int a;

    printf("(main) Ingrese un numero entre 1 y 3 \n");
    scanf("%i",&a);

    switch (a)
    {
    case 1:
        printf("(main) a es 1\n");
        break;
    case 2:
        printf("(main) a es 2\n");
        break;
    case 3:
        printf("(main) a es 3\n");
        break;
    
    default:
        printf("(main) Ingreso un numero fuera del rango\n");
        break;
    }
}