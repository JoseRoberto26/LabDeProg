#include <stdio.h>

int main ()
{
    float x, y, z;
    y = 30.0;
    printf("Digite o numero de horas trabalhadas do encanador\n");
    scanf("%f", &x);
    z = x * y;
    printf("A quantia liquida que devera ser paga eh igual a %f\n", z + (z * 0.08));
    return 0;
}
