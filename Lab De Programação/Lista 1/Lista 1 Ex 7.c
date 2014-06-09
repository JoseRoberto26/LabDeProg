#include <stdio.h>

int main()
{
    int x, y;
    printf ("Informe um numero: ");
    scanf("%d", &x);
    printf ("Informe outro numero para ser somado ao primeiro");
    scanf("%d", &y);
    printf ("A soma é igual a %d", x + y);
    return 0;

}
