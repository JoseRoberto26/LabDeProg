#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	char nome[100];
	int telefone;
	
	FILE *arq = fopen("agenda.txt", "w");
	if (arq == NULL){
		printf("Nao foi");
		exit(1);
	}
	
	do{
		printf("Digite o nome da pessoa\n");
		gets(nome);
		fflush(stdin);
		printf("Digite o numero do telefone\n");
		scanf("%d", &telefone);
		fflush(stdin);
		fputs(nome, arq);
		fwrite(&telefone,sizeof(int), 1, arq);	
	}	while (telefone != 0);	
	
	
	return 0;
}
