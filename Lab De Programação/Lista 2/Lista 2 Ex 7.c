#include <stdio.h>
#include <math.h>
int main ()
{
    float a, b;
    printf("Insira os valores dos catetos\n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("Valor da hipotenusa %f\n",sqrt (pow(a, 2) + pow(b, 2)));
    return 0;
}
