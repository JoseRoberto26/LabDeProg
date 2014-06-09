#include <stdio.h>

int main (){
	int numvet[10], i, pares;
	printf("Digite os numeros do vetor\n");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &numvet[i]);
	}
	pares = 0;
	for (i = 0; i < 10; i++){
		if (i % 2 == 0){
			pares ++;
		}
	}
printf ("Numero de elementos pares %d\n", pares ) ;
return 0 ;	
}
