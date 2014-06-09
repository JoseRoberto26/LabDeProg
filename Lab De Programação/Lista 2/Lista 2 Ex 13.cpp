#include <stdio.h>
#include <math.h>

int main()
{
	float x;
	printf("Digite o valor(numero real) da venda mensal para que seja calculada a comissão\n");
	scanf("%f", &x);
	if ( x >= 100000.0)
	{
		printf("Valor da comissão igual a %f\n", x * 0.16 + 700.0 );	
		return 0;
	}
	if ( x < 100000.0 & x > 80000.0)
	{
		printf("Valor da comissão igual a %f\n", x * 0.14 + 650.0 );	
		return 0;
	}
	if ( x < 80000.0 & x >= 60000.0)
	{
		printf("Valor da comissão igual a %f\n", x * 0.14 + 600.0 );	
		return 0;
	}
	if ( x < 60000.0 & x >= 40000.0)
	{
		printf("Valor da comissão igual a %f\n", x * 0.14 + 550.0 );	
		return 0;
	}
	if ( x < 40000.0 & x >= 20000.0)
	{
		printf("Valor da comissão igual a %f\n", x * 0.14 + 500.0 );	
		return 0;
	}
	if ( x < 20000.0)
	{
		printf("Valor da comissão igual a %f\n", x * 0.14 + 400.0 );	
		return 0;
	}
	else
	{
		printf("Digite um valor valido\n");
		return 0;
	}
}
