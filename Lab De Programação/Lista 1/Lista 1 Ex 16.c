#include <stdio.h>

int main()
{
    float x;
    printf("Digite sua altura em metros\n");
    scanf("%f", &x);
    printf("Seu peso ideal é %f \n", (72.7 * x) - 58);
    return 0;
}
