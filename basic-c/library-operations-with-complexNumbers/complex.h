#include "stdio.h"
#ifndef __COMPLEX_H__
#define __COMPLEX_H__

typedef struct {
    double real;
    double imaginario;
} Complejo;
//Suma dos números complejos
Complejo sumaComplejos(Complejo a, Complejo b);
//Resta dos números complejos
Complejo restaComplejos(Complejo a, Complejo b);
//Multiplica dos números complejos
Complejo multiplicacionComplejos(Complejo a, Complejo b);
//Obtiene el conjugado de un numero complejo
Complejo conjugadoComplejo(Complejo a);
//Multiplica un número complejo por un escalar
Complejo multiplicacionEscalar(Complejo a, double b);
//Obtiene el módulo de un número complejo
double moduloComplejo(Complejo a);
//Calcula el ángulo de un número complejo
double anguloComplejo(Complejo a);
//Eleva un número complejo a un exponente real usando la formula de De Moivre
Complejo exponenteRealComplejo(Complejo a, double b);
//Calcula el seno de un número complejo
Complejo senoComplejo(Complejo a);
//Calcula el coseno de un número complejo
Complejo cosenoComplejo(Complejo a);
//Calcula el logaritmo natural de un número complejo
Complejo logaritmoComplejo(Complejo a);
//Eleva un número complejo a un exponente complejo
Complejo exponenteComplejoComplejo(Complejo a, Complejo b);



#endif // __COMPLEX_H__