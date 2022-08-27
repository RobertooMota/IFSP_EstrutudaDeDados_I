#include <stdio.h>
#include <stdlib.h>

void mTransp(void);

int main(int argc, char argv[])
{
    mTransp();
    return 0;
}

void mTransp(void)
{
    int matriz[3][3],
        mTransp[3][3],
        index_A,
        index_B,
        aux,
        row = 3,
        colum = 3;

    for (index_A = 0; index_A < row; index_A++)
    {
        for (index_B = 0; index_B < colum; index_B++)
        {
            printf("Linha: %d Coluna: %d: ", index_A, index_B);
            scanf("%d", &matriz[index_A][index_B]);
            printf("\n aux: %d\n", matriz[index_A][index_B]);
        }
        printf("\n");
    }
    printf("Sua matriz:\n");
    for (index_A = 0; index_A < row; index_A++)
    {
        for (index_B = 0; index_B < colum; index_B++)
        {
            printf("| %d |", matriz[index_A][index_B]);
        }
        printf("\n");
    }

printf("Matriz transposta:\n");
    for (index_A = 0; index_A < colum; index_A++)
    {
        for (index_B = 0; index_B < row; index_B++)
            printf("| %d |", matriz[index_B][index_A]);
        printf("\n");
    }
}