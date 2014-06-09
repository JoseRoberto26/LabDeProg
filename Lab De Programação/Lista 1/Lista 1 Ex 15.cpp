#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z;
    printf("Digite dois numeros inteiros e um numero real\n");
    scanf("%f\n", &x);
    scanf("%f\n", &y);
    scanf("%f\n", &z);
    printf("O produto do dobro do primeiro com metade do segundo %d\n", ((x*2) * (y / 2)));
    printf("A soma do triplo do primeiro com o tercerio %f\n", x*3 + z);
    printf("O terceiro elevado ao cubo %f\n", pow(z, 3));
    return 0;


}

