

long potencia_entera_r(int base, unsigned int exponente)
{
    if(exponente)
        return base*potencia_entera_r(base, exponente-1);
    return 1;
}

long factorial_entero_r(unsigned int numero)
{
    if(numero)
        return numero*factorial_entero_r(numero-1);
    return 1;
}


