#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// ****************** Função principal (main) ******************
int main(void)
{
    char nome[20] = "Roberto";
    char nome2[20] = "Roberto";

    if (!strcmp(nome, nome2))
    {
        printf("VERDADEIRO");
    }
    return 0;
}