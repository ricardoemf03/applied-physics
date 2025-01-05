#include <stdio.h>
#include "complex.h"

int main() {
    int opcion;
    float a1=0, b1=0, a2=0, b2=0;
    float expo=0;
    float esc=0;
    printf("Ingrese el numero de la operacion que desea realizar con numeros complejos:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar dos complejos\n");
    printf("4. Hallar el conjugado\n");
    printf("5. Multiplicar un escalar por un complejo\n");
    printf("6. Hallar el modulo de un complejo\n");
    printf("7. Hallar el angulo de un numero complejo\n");
    printf("8. Elevar un complejo a un exponente real\n");
    printf("9. Seno de un numero complejo\n");
    printf("10. Coseno de un numero complejo\n");
    printf("11. Logaritmo de un numero complejo\n");
    printf("12. Elevar un complejo a un exponente complejo\n");
    printf("Ingrese: ");
    scanf("%d", &opcion);

    

    switch (opcion)
    {
    case 1:
        printf("----------Ingrese dos numero complejos----------\n");
        printf("Primer numero: Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Primer numero: Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        printf("Segundo numero: Ingrese parte real: ");
        scanf("%f", &a2);
        printf("Segundo numero: Ingrese parte imaginaria: ");
        scanf("%f", &b2);
        printf("------------------------------------------------\n");
        Complejo z1 = {a1, b1};
        Complejo z2 = {a2, b2};
        Complejo suma;
        
        suma = sumaComplejos(z1, z2);
        printf("La suma es: %.2lf + %.2lfi\n", suma.real, suma.imaginario);
        printf("------------------------------------------------\n");
        break;
    case 2:
        printf("----------Ingrese dos numero complejos----------\n");
        printf("Primer numero: Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Primer numero: Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        printf("Segundo numero: Ingrese parte real: ");
        scanf("%f", &a2);
        printf("Segundo numero: Ingrese parte imaginaria: ");
        scanf("%f", &b2);
        printf("------------------------------------------------\n");
        Complejo z3 = {a1, b1};
        Complejo z4 = {a2, b2};
        Complejo resta;

        resta = restaComplejos(z3, z4);
        printf("La resta es: %.2lf + %.2lfi\n", resta.real, resta.imaginario);
        printf("------------------------------------------------\n");
        break;
    case 3:
        printf("----------Ingrese dos numero complejos----------\n");
        printf("Primer numero: Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Primer numero: Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        printf("Segundo numero: Ingrese parte real: ");
        scanf("%f", &a2);
        printf("Segundo numero: Ingrese parte imaginaria: ");
        scanf("%f", &b2);
        printf("------------------------------------------------\n");
        Complejo z5 = {a1, b1};
        Complejo z6 = {a2, b2};
        Complejo mult;

        mult = multiplicacionComplejos(z5, z6);
        printf("La multiplicacion es: %.2lf + %.2lfi\n", mult.real, mult.imaginario);
        printf("------------------------------------------------\n");
        break;
    case 4:
        printf("----------Ingrese un numero complejo----------\n");
        printf("Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        Complejo z7 = {a1, b1};
        Complejo conj;

        conj = conjugadoComplejo(z7);
        printf("El conjugado es: %.2lf + %.2lfi\n", conj.real, conj.imaginario);
        printf("------------------------------------------------\n");
        break;
    case 5:
        
        printf("----------Ingrese un numero complejo----------\n");
        printf("Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        printf("Ingrese un numero escalar: ");
        scanf("%f", &esc);
        printf("------------------------------------------------\n");
        Complejo z8 = {a1, b1};
        Complejo mult_e;

        mult_e = multiplicacionEscalar(z8, esc);
        printf("La multiplicacion por escalar es: %.2lf + %.2lfi\n", mult_e.real, mult_e.imaginario);
        printf("------------------------------------------------\n");
        break;
    case 6:
        printf("----------Ingrese un numero complejo----------\n");
        printf("Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        Complejo z9 = {a1, b1};
        double mod;

        mod = moduloComplejo(z9);
        printf("El modulo es: %.2lf\n", mod);
        printf("------------------------------------------------\n");
        break;
    case 7:
        printf("----------Ingrese un numero complejo----------\n");
        printf("Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        Complejo z10 = {a1, b1};
        double ang;

        ang = anguloComplejo(z10);
        printf("El angulo en radianes es: %.2lf\n", ang);
        printf("------------------------------------------------\n");
        break;
    case 8:
        
        printf("----------Ingrese un numero complejo----------\n");
        printf("Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        printf("Ingrese un numero escalar para el exponente: ");
        scanf("%f", &expo);
        printf("------------------------------------------------\n");
        Complejo z11 = {a1, b1};
        Complejo exporeal;
        
        exporeal = exponenteRealComplejo(z11, expo);
        printf("El resultado es: %.2lf + %.2lfi\n", exporeal.real, exporeal.imaginario);
        printf("------------------------------------------------\n");
        
        break;
    case 9:
        printf("----------Ingrese un numero complejo----------\n");
        printf("Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        Complejo z12 = {a1, b1};
        Complejo seno;

        seno = senoComplejo(z12);
        printf("El seno es: %.2lf + %.2lfi\n", seno.real, seno.imaginario);
        printf("------------------------------------------------\n");
        break;
    case 10:
        printf("----------Ingrese un numero complejo----------\n");
        printf("Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        Complejo z13 = {a1, b1};
        Complejo coseno;

        coseno = cosenoComplejo(z13);
        printf("El coseno es: %.2lf + %.2lfi\n", coseno.real, coseno.imaginario);
        printf("------------------------------------------------\n");
        break;
    case 11:
        printf("----------Ingrese un numero complejo----------\n");
        printf("Ingrese parte real: ");
        scanf("%f", &a1);
        printf("Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        Complejo z14 = {a1, b1};
        Complejo log;

        log = logaritmoComplejo(z14);
        printf("El logaritmo natural es: %.2lf + %.2lfi\n", log.real, log.imaginario);
        printf("------------------------------------------------\n");
        break;
    case 12:
        printf("----------Ingrese dos numero complejos----------\n");
        printf("(base) Primer numero: Ingrese parte real: ");
        scanf("%f", &a1);
        printf("(base) Primer numero: Ingrese parte imaginaria: ");
        scanf("%f", &b1);
        printf("------------------------------------------------\n");
        printf("(expo) Segundo numero: Ingrese parte real: ");
        scanf("%f", &a2);
        printf("(expo) Segundo numero: Ingrese parte imaginaria: ");
        scanf("%f", &b2);
        printf("------------------------------------------------\n");
        Complejo z15 = {a1, b1};
        Complejo z16 = {a2, b2};
        Complejo ex;

        ex = exponenteComplejoComplejo(z15, z16);
        printf("La exponenciacion es: %.2lf + %.2lfi\n", ex.real, ex.imaginario);
        printf("------------------------------------------------\n");
        break;
    
    default:
        printf("Opción no válida\n");
        break;
    }

    

    

    

    

    return 0;
}