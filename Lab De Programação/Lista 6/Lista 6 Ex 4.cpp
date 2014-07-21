#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void copiar_conteudo(FILE *arq, FILE *arq2){
	char leitor1[1000];
	while (fgets(leitor1, 1000, arq) != NULL){
		int i;
		for(i=0; i <= leitor1[i];  i++ ){
			leitor1[i] = toupper(leitor1[i]);
		}
		(fputs(leitor1, arq2));
	}
}

int main() {
	
	void copiar_conteudo(FILE *arq, FILE *arq2);
	
	char nomeArquivo1[100], nomeArquivo2[100];
	printf("Digite o nome do primeiro arquivo\n"); 
	gets(nomeArquivo1);
	printf("Digite o nome do segundo arquivo\n"); 
	gets(nomeArquivo2);
	
	FILE *arq = fopen(nomeArquivo1, "r");
	if (arq == NULL){
		printf("Nao foi");
		exit(1);
	}
	
	FILE *arq2 = fopen(nomeArquivo2, "w");
	if (arq2 == NULL){
		printf("Nao foi");
		exit(1);
	}
	
	copiar_conteudo(arq, arq2);
	fclose(arq);
	
	printf("Conteudo copiado com sucesso");
	return 0;
}

