#include <stdio.h>

int main()
{
    float x;
    printf("Digite a temperatura em F \n");
    scanf("%f", &x);
    printf("A temperatura em celsius é %f \n", (5 * (x-32) / 9));
    return 0;
}
