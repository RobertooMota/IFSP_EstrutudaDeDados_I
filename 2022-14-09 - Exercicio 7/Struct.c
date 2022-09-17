#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char cor[15];
    int aro,
        velMax,
        ano;

} Carro;

int main(int argc, char *argv[])
{
    Carro Gol;
    Gol.ano = 2020;
    Gol.velMax = 210;
    Gol.aro = 19;
    strcpy(Gol.cor, "Branco");

    printf("%d", Gol.ano);

    return 0;
}