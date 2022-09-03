/*
A multiplicação de dois números inteiros pode ser feita
através de somas sucessivas. Proponha um algoritmo
recursivo Multip(n1,n2) que calcule a multiplicação de
dois inteiros.
*/
#include <stdio.h>
#include <stdlib.h>

int fatorial(int num)
{
    if (num == 0)
        return 1;
    else
        return num * (fatorial(num - 1));
}

int main()
{

    printf("Fatorial: %d\n", fatorial(3));
    return 0;
}