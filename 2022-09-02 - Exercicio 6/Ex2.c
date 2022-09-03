/*
Faça uma função recursiva que permita somar os
elementos de um vetor de inteiros.
*/
#include <stdio.h>
#include <stdlib.h>

int soma(int *vetor, int buffer)
{
    if (buffer == 0)
        return 0;
    else
        return vetor[buffer - 1] + soma(vetor, buffer - 1);
}

int main()
{

    int BUFFER = 5;
    int vetor[5] = {1, 2, 3, 4, 5};

    printf("Resultado: %d \n", soma(vetor, BUFFER));

    return 0;
}