#include <stdio.h>

int main ()
{
    float x;
    printf("Insira seu salario\n");
    scanf("%f", &x);
    printf("Seu novo salario com o aumento de 25% é %f", x + (x * 0.25));
    return 0;
}
