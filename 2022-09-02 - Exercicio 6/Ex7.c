/*
Faça uma função recursiva similar à
função do exercício 6, porém que exiba
os valores do vetor em ordem inversa
*/

#include <stdio.h>
#include <stdlib.h>

void func(int *vetor, int buffer)
{
    if (buffer == 0)
        return 0;
    printf("%d ", vetor[buffer - 1]);
    func(vetor, buffer - 1);
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