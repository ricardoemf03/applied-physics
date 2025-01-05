#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(50);

    int n=1000000;
    const int bins = 20;
    int hist[bins];

    for(int i = 0 ; i < bins ; i++)
        hist[i] = 0;

    printf("RAND_MAX %i\n",RAND_MAX);

    // for(int i = 0 ; i < n ; i++)
    //     printf("%f\n",rand()/(RAND_MAX + 0.0) );
    

    for(int i = 0 ; i < n ; i++)
        hist[ rand() % bins ]++;

    // for(int i = 0 ; i < bins ; i++)
    //     printf("%i\t%i\n",i,hist[ i ] );
        
    for(int i = 0 ; i < bins ; i++)
        printf("%i\t%.2f\n",i,hist[ i ] * bins / (n+0.0) );
    
}