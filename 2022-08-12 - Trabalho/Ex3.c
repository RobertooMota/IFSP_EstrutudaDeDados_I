#include <stdio.h>
#include <stdlib.h>

void mIdent(void);

int main(int argc, char argv[])
{
    mIdent();
    return 0;
}

void mIdent(void)
{

    int indexA, indexB, status = 0,
                        matriz[5][5] = {{1, 0, 0, 0, 0},
                                        {0, 1, 0, 0, 0},
                                        {0, 0, 3, 0, 0},
                                        {0, 0, 0, 1, 0},
                                        {0, 0, 0, 0, 1}};
    for (indexA = 0; indexA < 5; indexA++)

    {
        if (matriz[indexA][indexA] == 1)
        {
            continue;
        }
        else
        {
            printf("nao e identidade!\n");
            break;
        }
    }
    printf("e identidade!\n");
}