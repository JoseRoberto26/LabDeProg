#include <stdio.h>
#include <stdlib.h>

int main(){
	int numvet[15], i, qtd, media;
	printf("Digite as notas dos alunos\n");
	for(i = 0; i < 15; i++){
		scanf("%d", &numvet[i]);
	}
	for(i = 0; i < 15; i++){
	printf("Notas : %d\n ", numvet[i]);
    }	
	for(i = 0; i < 15; i++){
		qtd += numvet[i];
	}
	media = qtd/15;
printf ("A media e: %d",media);
}

