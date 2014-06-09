#include <stdio.h>

int main()
{
    float x, y;
    printf("Digite quanto voce ganha por hora e o numero de horas trabalhadas no mes");
    scanf("%f", &x);
    scanf("%f", &y);
    printf("Seu salario mensal bruto é de %f \n", x * y );
    printf("Valor descontado ao INSS %f \n", (x * y) * 1,07 );
    printf("Valor descontado ao IR %f \n", (x * y) * 1,11 );
    printf("Valor descontado ao Sindicato %f \n", (x * y) * 1,05 );
    printf("Salario liquido %f \n", ((x * y) - ((x * y) * 1,24)));
    return 0;
}
