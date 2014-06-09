#include <stdio.h>

int main (){
	int numvet[10], i;
	printf("Digite os numeros do vetor\n");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &numvet[i]);
			if (numvet[i] < 0){
				numvet[i] =  0;
		}
	}
		for (i = 0; i < 10; i++){
			printf("%d\n", numvet[i]);
		}
return 0;	
}
