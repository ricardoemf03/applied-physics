/* Comparadores y logica de alto nivel en C */

#include <stdio.h>

int main()
{
    int a=0;
    int b=2;

    printf("\nOperadores de comparacion\n");

    printf("(main) a==b %i\n",a==b);
    printf("(main) a<b %i\n",a<b);
    printf("(main) a>b %i\n",a>b);
    printf("(main) a>=b %i\n",a>=b);
    printf("(main) a<=b %i\n",a<=b);

    printf("(main) Operadores logicos\n");
    printf("(main) Operador AND (&&)\n");

    printf("(main) 0 && 0 = %i\n", 0 && 0 );
    printf("(main) 0 && 1 = %i\n", 0 && 1 );
    printf("(main) 1 && 0 = %i\n", 1 && 0 );
    printf("(main) 1 && 1 = %i\n", 1 && 1 );

    printf("(main) Operador OR (||)\n");

    printf("(main) 0 || 0 = %i\n", 0 || 0 );
    printf("(main) 0 || 1 = %i\n", 0 || 1 );
    printf("(main) 1 || 0 = %i\n", 1 || 0 );
    printf("(main) 1 || 1 = %i\n", 1 || 1 );

    printf("(main) Operador NOT (!)\n");

    printf("(main) !0 = %i\n", !0 );
    printf("(main) !1 = %i\n", !1 );

    printf("(main) (a<b) && (a==b) %i \n", (a<b) && (a==b) );
    printf("(main) (a<b) || (a==b) %i \n", (a<b) || (a==b) );
    printf("(main) !((a<b) || (a==b)) %i \n", ! ( (a<b) || (a==b) ) );


    return 0;
}