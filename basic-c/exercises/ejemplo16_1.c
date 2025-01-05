#include <stdlib.h>
#include "ejemplo16_1.h"

int moneda()
{
    return rand() % 2;
}

int k_monedas(int k)
{
    int cuenta = 0;
    for( int i = 0; i < k ; i++)
        if( moneda() ) cuenta++;
    
    return cuenta;
}