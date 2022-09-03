/*
Faça uma função recursiva que receba
um número inteiro positivo N e imprima
todos os números naturais de 0 até N em
ordem DEcrescente
*/

#include <stdlib.h>
#include <stdio.h>

void imprime(int num)
{
    if (num < 0)
        return 0;
    printf("%d", num);
    imprime(num - 1);
}

int main(void)
{
    /* DESCOMENTE PARA RECEBER O NUMERO DO USUARIO E COMENTE A LINHA 28
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    imprime(num);
    */

    imprime(10);
    return 0;
}