#include <math.h>
#include "complex.h"

Complejo sumaComplejos(Complejo a, Complejo b) {
    Complejo resultado;
    resultado.real = a.real + b.real;
    resultado.imaginario = a.imaginario + b.imaginario;
    return resultado;
}

Complejo restaComplejos(Complejo a, Complejo b) {
    Complejo resultado;
    resultado.real = a.real - b.real;
    resultado.imaginario = a.imaginario - b.imaginario;
    return resultado;
}
Complejo multiplicacionComplejos(Complejo a, Complejo b) {
    Complejo resultado;
    resultado.real = a.real * b.real - a.imaginario * b.imaginario;
    resultado.imaginario = a.real * b.imaginario + a.imaginario * b.real;
    return resultado;
}

Complejo conjugadoComplejo(Complejo a) {
    Complejo resultado;
    resultado.real = a.real;
    resultado.imaginario = -a.imaginario;
    return resultado;
}

Complejo multiplicacionEscalar(Complejo a, double b) {
    Complejo resultado;
    resultado.real = a.real * b;
    resultado.imaginario = a.imaginario * b;
    return resultado;
}

double moduloComplejo(Complejo a) {
    return sqrt(a.real * a.real + a.imaginario * a.imaginario);
}
double anguloComplejo(Complejo a) {
    return atan2(a.imaginario, a.real);
}
Complejo exponenteRealComplejo(Complejo a, double b) {
    Complejo resultado;
    double modulo = moduloComplejo(a);
    double angulo = anguloComplejo(a);

    resultado.real = pow(modulo, b) * cos(b * angulo);
    resultado.imaginario = pow(modulo, b) * sin(b * angulo);
    return resultado;
}
Complejo senoComplejo(Complejo a) {
    Complejo resultado;

    resultado.real = sin(a.real) * cosh(a.imaginario);
    resultado.imaginario = cos(a.real) * sinh(a.imaginario);
    return resultado;
}
Complejo cosenoComplejo(Complejo a) {
    Complejo resultado;

    resultado.real = cos(a.real) * cosh(a.imaginario);
    resultado.imaginario = - sin(a.real) * sinh(a.imaginario);
    return resultado;
}
Complejo logaritmoComplejo(Complejo a) {
    Complejo resultado;
    double modulo = moduloComplejo(a);
    double angulo = anguloComplejo(a);

    resultado.real = log(modulo);
    resultado.imaginario = angulo;
    return resultado;
}
Complejo exponenteComplejoComplejo(Complejo a, Complejo b) {
    Complejo resultado;
    Complejo logA = logaritmoComplejo(a);
    Complejo multi = multiplicacionComplejos(b, logA);

    resultado.real = exp(multi.real) * cos(multi.imaginario);
    resultado.imaginario = exp(multi.real) * sin(multi.imaginario);
    return resultado;
}