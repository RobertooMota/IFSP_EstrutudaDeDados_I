#include <stdlib.h>
#include <stdio.h>

void contaVetor(int *);

int main(int argc, char argv[])
{
    int vetor[5] = {0, 1, 2, 3, 4};
    contaVetor(vetor);
}

void contaVetor(int *vetor)
{
    int index;
    for (index = 0; index < 5; index++)
        printf("%d",vetor[index]);
}