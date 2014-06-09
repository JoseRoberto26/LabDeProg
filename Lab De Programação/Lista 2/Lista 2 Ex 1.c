#include <stdio.h>
#include <math.h>

int main ()
{
    float x;
    printf("Insira um numero real\n");
    scanf("%f", &x);
    printf("O quadrado do numero é %f", pow(x, 2));
    return 0;
}
