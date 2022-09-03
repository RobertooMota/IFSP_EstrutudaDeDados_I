#include <stdlib.h>
#include <stdio.h>

int mdc(int a, int b)
{
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int mdsInterativo(int a, int b)
{
    int aux;
    while (b != 0)
    {
        aux = a % b;
        a = b;
        b = aux;
    }
    return a;
}

int main(void)
{
    printf("%d\n", mdc(20, 30));
    printf("%d\n", mdsInterativo(20, 30));
    return 0;
}