#include <stdio.h>
#include <stdlib.h>

void inverter(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}

int main(int argc, char argv[])
{
    int a, b;
    a = 3;
    b = 1;

    printf("Valor antes da inversão: %d   %d\n", a, b);
    inverter(&a, &b);
    printf("Valor depois da inversao: %d   %d\n", a, b);
    return 0;
}