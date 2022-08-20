#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checkNota(float);
int checkNome(char *nome);
int check(char *dado, int tipo); // tipo 1 nome tipo 2 nota

int main(int argc, char *argv[])
{
    char melhorAluno[20];
    float maiorNota = 0;
    int index, statusNome, statusNota;

    printf("Tamanho do argC %d\n\n", argc);
    if (argc >= 2)
    {
        for (index = 1; index < argc; index++)
        {
            if (index % 2 == 0)
            {
                statusNota = check(argv[index], 2);
            }
            else
            {
                statusNome = check(argv[index], 1);
            }
        }
    }

    else
    {
        printf("\nArg C eh menor que 3\n");
    }

    if (statusNome && statusNota)
    {
    }
    printf("\n\nstatus nota: %d\nstatus nome: %d\n", statusNota, statusNome);   // <<<<<---- diz se a nota é um numero
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
        printf("eh um numero (tipo 2)");
        return 1;
    }
    else if (tipo == 1)
    {
        int index;
        for (index = 0; index < strlen(dado); index++)
        {
            if(isdigit(dado[index]))
            {
                printf("Tem numero\n");
                return 0;
            }
        }
        printf("Nao tem numero (tipo 1)\n");
        return 1;
    }
}

// strcpy(melhorAluno, argv[1]);
// int index;
// for (index = 0; index <= argc; index++)
// {

// printf("%d",index);
// }