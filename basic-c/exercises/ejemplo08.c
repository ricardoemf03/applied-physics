#include "stdio.h"

int main()
{
    int a;

    if(a) 
        printf("(main) a tiene un valor diferente de cero. a=%i\n",a);

    char b = 'A';

    if(b)
        printf("(main) b tiene un valor diferente de cero. b=%c\n",b);

    float c=0;

    if(c)
        printf("(main) c tiene un valor de cero. Esta linea nunca se muestra");
    else
        printf("(main) c=0, se ejecuta la clausula else\n");

    int d = 10;

    while(d--)
        printf("(main) d=%i\n",d);

    return 0;
}