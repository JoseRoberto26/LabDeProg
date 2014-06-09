#include <stdio.h>

int main()
{
    float x, y, z, w;
    printf("Informe suas quatro notas bimestrais para que seja calculada a média");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    scanf("%f", &w);
    printf("A média é %f", ((x + y + z + w) /4.0));

    return 0;

}
