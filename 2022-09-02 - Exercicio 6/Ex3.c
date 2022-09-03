/*
A multiplicação de dois números inteiros pode ser feita
através de somas sucessivas. Proponha um algoritmo
recursivo Multip(n1,n2) que calcule a multiplicação de
dois inteiros.
*/
#include <stdio.h>
#include <stdlib.h>

int multRec(int num1, int num2)
{
    if (num2 == 0)
        return 0;
    else
        return num1 + (multRec(num1, num2 - 1));
}

int main()
{
    int n1, n2;
    printf("Escolha os numeros a serem multiplicados: ");
    scanf("%d%d", &n1, &n2);

    printf("Resultado: %d\n", multRec(n1, n2));
    return 0;
}