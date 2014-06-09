#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, z;
	printf("Digite tres numeros inteiros positivos para que seja efetuado o calculo da media");
	scanf("%d\n", &x);
	scanf("%d\n", &y);
	scanf("%d", &z);
	if(x < 0)
	{
		printf("Apenas numeros positivos\n");
		return 0;
	}
	if(y < 0)
	{
		printf("Apenas numeros positivos\n");
		return 0;
	}
	if(z < 0)
	{
		printf("Apenas numeros positivos\n");
		return 0;
	}	
	else
	{
		int o;
		printf("Agora digite o tipo de media que será calculada baseada na opção escolhida dentre as abaixo\n 1 - Geometrica\n 2 - Ponderada\n 3 - Harmonica\n 4 - Aritmetica\n");
		scanf("%d", &o);
		if (o = 1)
		{
			printf(" Media Geometrica igual a %d\n", cbrt(x * y * z) );	
			return 0;
		}
		if (o = 2)
		{
			printf("Media Ponderada igual a %d\n", (x + (2*y) + (3*z)) / 6  );
			return 0;
		}
		if (o = 3)
		{
			printf ("Media Harmonica igual a %d\n", 1 / ((1/x) + (1/y) + (1/z) ));
			return 0;	
		}
		if (o = 4)
		{
			printf("Media aritmetica igual a %d\n", (x + y + z) / 3);
			return 0;
		}
		else
		{
			printf("Digite um numero valido entre 1 e 4\n");
			return 0;
		}
	}
}
