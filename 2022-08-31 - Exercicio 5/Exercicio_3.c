#include <stdlib.h>
#include <stdio.h>

void imprimir(int *vet, int quant)
{
    if (quant > 0)
    {
        printf("%d ", vet[quant - 1]);
        imprimir(vet, quant - 1);
    }
    
}

int main(void)
{
    int vetor[3] = {1, 2, 3};

    imprimir(vetor, 3);
    printf("\n");
    return 0;
}