#include "stdio.h"

int global = 1;

int funcion()
{
    int a = 10;

    printf("(funcion) a=%i\n",a);
    printf("(funcion) global=%i\n",global);

    return 0;
}

int main(){

    int a = 20;

    printf("(main) a=%i\n",a);
    printf("(main) global=%i\n",global);

    funcion();

    {
        int b=30;
        printf("(sub_main) a=%i\n",a);
        printf("(sub_main) b=%i\n",b);
        printf("(sub_main) global=%i\n",global);
    }

    
    //printf("b=%i\n",b);

}