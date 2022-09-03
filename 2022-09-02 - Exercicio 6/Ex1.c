/*
Crie uma função recursiva que receba um número
inteiro positivo N e calcule o somatório dos números de
1 a N.
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int num)
{
    if (num == 0)
        return 0;
    else
        return num + soma(num - 1);
}

int main(void)
{
    int num;
    printf("Escolha um numero inteiro positivo: ");
    scanf("%d", &num);
    printf("%d\n", soma(num));

    return 0;
}