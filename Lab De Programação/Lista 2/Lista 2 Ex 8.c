#include <stdio.h>

int main ()
{
    int x;
    printf("digite um inteiro de tres digitos\n");
    scanf("%d", &x);
    if (x < 100)
        {
        printf("digite um valor valido\n");
        return 0;
        }
    if (x > 1000)
    {
        printf("digite um valor valido\n");
        return 0;
    }
    else
        {
        int x1 = (x / 100);
    int x2 = (x % 100) / 10;
    int x3 = (x % 100) % 10;
    printf("O numero invertido � %1d%1d%1d\n", x3, x2, x1);
    }
    return 0;
}
