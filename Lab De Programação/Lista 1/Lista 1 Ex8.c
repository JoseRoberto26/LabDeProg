#include <stdio.h>

int main()
{
    float x, y, z, w;
    printf("Informe suas quatro notas bimestrais para que seja calculada a m�dia");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    scanf("%f", &w);
    printf("A m�dia � %f", ((x + y + z + w) /4.0));

    return 0;

}
