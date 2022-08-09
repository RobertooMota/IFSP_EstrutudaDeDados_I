#include <stdlib.h>
#include <stdio.h>
#include <string.h>


float resultado(char);

int main(void)
{
    char expressao[20];
    printf("Digite a expressão sem espaços: ");
    scanf("%s", expressao);
    printf("Expressão digitada: %s", expressao);
    printf("%s",strlen(expressao));

    return 0;
}

float resultado(char expressao)
{
    float resultado;

    return resultado;
}
