#include <stdio.h>

int main (){
	int numvet[10], i, pos, maior;
	printf("Digite os numeros a serem armazenados no vetor\n");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &numvet[i]);
	}
	pos = 0;
	maior = numvet[0];
	for (i = 0; i < 10; i++){
		if (numvet[i] > maior){
			maior = numvet[i];
			pos = i;
		}
	printf("%d\n", numvet[i]);
	}
printf ("O maior elemento %d esta na posicao %d" , maior , pos ) ;
return 0 ;	
}

