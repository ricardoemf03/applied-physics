#include "stdio.h"

int funcion01(int a)
{
    printf("(funcion01) valor recibido a=%i\n",a);
    a=255;
    printf("(funcion01) valor modificado a=%i\n",a);
    return 0;
}



int main()
{
    int un_entero = 10;
    
    printf("(main) valor enviado un_entero=%i\n",un_entero);
    funcion01(un_entero);
    printf("(main) valor despues de llamar funcion01 un_entero=%i\n",un_entero);

    return 0;
}