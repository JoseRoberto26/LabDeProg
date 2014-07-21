#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void copiar_conteudo(FILE *arq, FILE *arq2, FILE *arq3){
	char leitor1[1000], leitor2[1000];
	while (fgets(leitor1, 1000, arq) != NULL && fgets(leitor2, 1000, arq2) != NULL){
		fputs(leitor1, arq3);
		fputs(leitor2, arq3);
	}
}
int main(){
	
	void copiar_conteudo(FILE *arq, FILE *arq2, FILE *arq3);
	
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
	
	FILE *arq2 = fopen(nomeArquivo2, "r");
	if (arq2 == NULL){
		printf("Nao foi");
		exit(1);
	}
	
	FILE *arq3 = fopen("Copia3.txt", "w");
	if (arq2 == NULL){
	printf("Nao foi");
	exit(1);
	}
	
	copiar_conteudo(arq, arq2, arq3);
	fclose(arq);
	fclose(arq2);
	
	printf("Conteudos copiados e arquivo criado\n");
	return 0;
	
}
