#include <stdio.h>
#include <stdlib.h>

int main(){
	char arquivo1[100], arquivo2[100], cidade[40];
	int num_habitantes, maior;
	
	printf("Digite o arquivo de entrada\n");
	gets(arquivo1);
	printf("Agora digite o arquivo de saida\n");
	gets(arquivo2);
	
	FILE *arq1 = fopen(arquivo1, "r");
	if (arq1 == NULL){
		printf("Nao foi possivel abrir o arquivo");
		return 0;
	}

	FILE *arq2 = fopen(arquivo2, "w");
	if (arq2 == NULL){
		printf("Nao foi possivel abrir o arquivo");
		return 0;
	}
	
	char frase[100];
	while (fgets(frase, 100, arq1) != NULL){
		fscanf(arq1, "%s %d", &cidade, &num_habitantes);
		
		if (num_habitantes > maior){
			maior = num_habitantes;
			fprintf(arq2,"Cidade %s, Habitantes %d\n", cidade, maior);
			rewind(arq2);
		}
	}
	
	printf("Arquivo criado com sucesso");
	return 0;
}
