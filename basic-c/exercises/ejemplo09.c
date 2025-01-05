#include "stdio.h"

int main()
{
    for( int i = 0 ; i < 10 ; i++ )
        printf("(main) i = %i\n",i);
    
    
    for( int i = 10 ; i > 0 ; i-- )
        printf("(main) i = %i\n",i);

    return 0;
}