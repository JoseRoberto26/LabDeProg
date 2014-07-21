#include <stdio.h>
#include <stdlib.h>

int main(){
	char arquivo1[100], arquivo2[100], nome[40];
	int nascimento, ano;
	
	printf("Digite o arquivo de entrada\n");
	gets(arquivo1);
	printf("Agora digite o arquivo de saida\n");
	gets(arquivo2);
	printf("Por ultimo, digite o ano corrente\n");
	scanf("%d", &ano);
	
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
	
	int idade;
	char frase[100];
	while (fgets(frase, 100, arq1) != NULL){
		fscanf(arq1, "%s %d", &nome, &nascimento);
		idade = ano - nascimento;
		if(idade > 18){
			fprintf(arq2,"Nome %s, Idade %d, Maior de idade\n", nome, idade);
		}
		else if(idade < 18){
			fprintf(arq2, "Nome %s, Idade %d, Menor de idade\n", nome, idade);
		}
		else{
			fprintf(arq2, "Nome %s, Idade %d, Entrando na maior idade\n", nome, idade);
		}
	}

	printf("Arquivo criado com sucesso");
	return 0;
}
