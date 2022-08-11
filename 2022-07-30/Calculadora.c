#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float resultado(float, float, char);

int main(void)
{
    float val1, val2;
    char operacao;
    printf("Digite o valor 1: ");
    scanf("%f", &val1);
    printf("Digite o valor 2: ");
    scanf("%f", &val2);
    fflush(stdin);
    printf("Digite a operacao: ");

    scanf("%c", &operacao);

    printf("Valor 1: %f  Valor 2: %f  Operacao: %c\n", val1, val2, operacao);

    (operacao == '*' || operacao == '/' || operacao == '+' || operacao == '-') ? printf("Resultado da operacao: %.2f\n", resultado(val1, val2, operacao)) : printf("Operacao não reconhecida!\n");

    return 0;
}

float resultado(float val1, float val2, char operacao)
{
    if (operacao == '*')
    {
        return val1 * val2;
    }
    else if (operacao == '/')
    {
        return val1 / val2;
    }
    else if (operacao == '+')
    {
        return val1 + val2;
    }
    else if (operacao == '-')
    {
        return val1 - val2;
    }
}