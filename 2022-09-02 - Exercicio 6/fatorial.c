/*
Teste
*/
#include <stdio.h>
#include <stdlib.h>

int fatorial(int num)
{
    if (num == 0)
        return 1;
    else
        return num * (fatorial(num - 1));
}

int main()
{

    printf("Fatorial: %d\n", fatorial(10));
    return 0;
}