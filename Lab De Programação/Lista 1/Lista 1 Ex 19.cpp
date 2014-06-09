#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    printf("Digite quanto voce ganha por hora e o numero de horas trabalhadas no mes\n");
    scanf("%f", &x);
    scanf("%f", &y);
    printf("Seu salario mensal bruto é de %f \n", x * y );
    printf("Valor descontado ao INSS %f \n", (x * y) - ((x * y)) * 0,92 );
    printf("Valor descontado ao IR %f \n", (x * y) - ((x * y)) * 0,89 );
    printf("Valor descontado ao Sindicato %f \n", (x * y) - ((x * y)) * 0,95);
	printf("Salario liquido %f \n",(x * y) - ((x * y) - ((x * y) * 0,77)));
}

