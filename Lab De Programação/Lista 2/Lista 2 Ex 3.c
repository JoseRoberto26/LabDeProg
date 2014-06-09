#include <stdio.h>
#include <math.h>

int main ()
{
    float x, y, c;
    printf("Digite tres numeros\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &c);

    x = pow(x, 2);
    y = pow(y, 2);
    c = pow(c, 2);

    printf("A soma do quadrado dos tres numeros eh igual a %f\n", x + y + c );
    return 0;
}

