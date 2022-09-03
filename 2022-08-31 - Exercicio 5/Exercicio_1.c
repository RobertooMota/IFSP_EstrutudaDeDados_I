#include <stdio.h>
#include <stdlib.h>

int pot(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * pot(base, exp - 1);
}

int main(void)
{
    int base, exp;
    printf("Base e expoente: ");
    scanf("%d%d", &base, &exp);

    if (exp > 0)
        printf("%d\n",pot(base, exp));

    return 0;
}