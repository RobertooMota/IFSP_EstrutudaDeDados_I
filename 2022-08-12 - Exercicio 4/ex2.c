#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check(char *dado, int tipo); // tipo 1 nome tipo 2 nota
int checkMaior(char *nome, float nota);

int main(int argc, char *argv[])
{
    char melhorAluno[20];
    float maiorNota = 0;
    int index, statusNome, statusNota;

    // printf("Tamanho do argC %d\n\n", argc);
    if (argc > 2)
    {
        for (index = 1; index < argc; index++)
        {
            if (index % 2 == 0)
            {
                statusNota = check(argv[index], 2);

                //...........
                if (statusNome && statusNota)
                {
                    if (checkMaior(argv[index - 1], atof(argv[index])))
                    {
                        strcpy(melhorAluno, argv[index - 1]);
                        maiorNota = atof(argv[index]);
                        statusNome = 0;
                        statusNota = 0;
                    }
                }
                else if (!statusNome || !statusNota)
                {
                    printf("\n\nFalha na verificacao! Confira os valores indicados\n\n");
                    return 0;
                }
                //...........
            }
            else
            {
                statusNome = check(argv[index], 1);
            }
        }
    }
    else
    {
        printf("\nArgc tem menos parametros do que deveria!!!\n");
    }

    // Status 1 = tudo OK Status 2 = Falha na verificação
    printf("\nstatus nota: %d\nstatus nome: %d\n", statusNota, statusNome); //<<<<---- Descomentar para debugar
    return 0;
}

int check(char *dado, int tipo)
{
    if (tipo == 2)
    {
        int index;
        for (index = 0; index < strlen(dado); index++)
        {
            if (!isdigit(dado[index]))
            {
                printf("nao eh umnumero: %c", dado[index]);
                return 0;
            }
        }
        printf("eh um numero (tipo 2)\n");
        return 1;
    }
    else if (tipo == 1)
    {
        int index;
        for (index = 0; index < strlen(dado); index++)
        {
            if (isdigit(dado[index]))
            {
                printf("Tem numero\n");
                return 0;
            }
        }
        printf("Nao tem numero (tipo 1)\n");
        return 1;
    }
}

int checkMaior(char *nome, float nota)
{
    return 1;
}