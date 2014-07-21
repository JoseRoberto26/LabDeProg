#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	char nomeArquivo[100];
	int numpalavra = 0;
	printf("Digite o nome do primeiro arquivo\n"); 
	gets(nomeArquivo);
	
	FILE *arq = fopen(nomeArquivo, "r");
	if (arq == NULL){
		printf("Nao foi");
		exit(1);
	}
	
	char palavra[1000], compara[1000];
	printf("Digite a palavra que quer procurar\n");
	gets(palavra);
	while(fgets(compara, 1000, arq) != NULL ){
		if(compara == palavra){
			numpalavra ++;
		}
	}
	
	printf("Numero de repeticoes da palavra %d\n", numpalavra);
	return 0;	
	
}

