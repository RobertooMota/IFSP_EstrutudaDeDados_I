#include <stdio.h>
#include <stdlib.h>

void teste_1(int *);
void tamanhoVetor(int *);
void tamanhoVariavel(int *);

int main(int argc, int *argv[])
{
    int vetor[10] = {4, 2, 3, 4, 5, 7, 8, 9, 10}, x=0;
    // teste_1(vetor);
    // tamanhoVetor(vetor);
    // tamanhoVariavel(vetor);
    while (*(vetor))
    {
        printf("%d",x);
        x++;
    }
    

    printf("\nTeste realizado com sucesso\n");

    return 0;
}

void teste_1(int *vetor)
{
    int index;
    printf("entrou no teste\n");
    for (index = 0; index <= sizeof(vetor); index++)
    {
        printf("%d ", vetor[index]);
    }
}

void tamanhoVetor(int *vetor)
{
    printf("\nTamanho do vetor: %d\n", sizeof(vetor) / sizeof(vetor[0]));
}

void tamanhoVariavel(int *vetor)
{
    for (int index = 0; index < vetor; index++)
        printf("%d", index);
    printf("Tamanho espaço ZERO do vetor: %d\n", sizeof(vetor[0]));
    printf("Tamanho do INT: %d\n", sizeof(int));
}