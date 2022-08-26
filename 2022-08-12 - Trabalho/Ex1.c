#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void leVetor(void);
void imprimeVetor(int *vetor, int BUFFER);

int main(int argc, char argv[])
{
    leVetor();
    return 0;
}

void leVetor(void)
{
    int BUFFER = 10;
    int valores[BUFFER], index;
    int aux;

    for (index = 0; index < BUFFER; index++)
    {
        printf("Digite o valor %d: ", index + 1);
        scanf("%d", &aux);
        valores[index] = aux;
        printf("valor salvo: %d\n", valores[index]);
    }
    imprimeVetor(valores, BUFFER);
}

void imprimeVetor(int *vetor, int BUFFER)
{
    int index;
    printf("\nOs valores são: ");
    for (index = 0; index < BUFFER; index++)
        printf("Posicao: %d  valor: %d\n", index + 1, vetor[index]);
}
