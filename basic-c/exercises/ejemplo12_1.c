#include "ejemplo12_1.h"

long potencia_entera(int base, int exponente)
{
    long resultado=1;
    while (exponente)
    {
        resultado *= base; // resultado = resultado * base;
        exponente--;
    }

    return resultado;
    
}

long factorial_entero(int numero)
{
    long resultado = 1;
    if( (numero > 0) && (numero < 11) )
    {
        while (numero)
            resultado *= numero--;
        
    }

    return resultado;

}
