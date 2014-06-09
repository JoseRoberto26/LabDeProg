#include <stdio.h>

int main()
{
    float x;
    printf("Digite a temperatura em C \n");
    scanf("%f", &x);
    printf("A temperatura em Farenheit é %f \n", (x * 1.8) + 32);
    return 0;
}
