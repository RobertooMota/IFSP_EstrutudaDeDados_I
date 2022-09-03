/*
Faça uma função recursiva que receba
um vetor e seu tamanho por parâmetro e
exiba seus valores da primeira até a
última posição.
*/

#include <stdio.h>
#include <stdlib.h>

void func(int *vetor, int buffer)
{
    if (buffer == 0)
        return 0;
    // printf("%d ", vetor[buffer - 1]); Descomente aqui e comente linha 17 para inverter a ordem
    func(vetor, buffer - 1);
    printf("%d ", vetor[buffer - 1]);
}

int main()
{

    int vetor[5] = {1,
                    2,
                    3,
                    4,
                    5};
    func(vetor, 5);

    return 0;
}