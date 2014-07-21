#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	FILE *arq;
	char nomeArquivo[100];
	int numlinhas;
	printf("Digite o nome do arquivo\n"); 
	gets(nomeArquivo);
	if ((arq = fopen(nomeArquivo, "r")) == NULL){
		printf("Arquivo nao pode ser aberto");
		exit(1);
	}
	
	char frase[100];
	
	while(fgets(frase, 100, arq) != NULL){
		numlinhas ++;
	}
	printf("Numero de linhas %d\n", numlinhas);
	
}
