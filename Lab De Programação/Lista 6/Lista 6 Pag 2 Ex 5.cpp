#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[100], profissao [100];
	int servico, i, n = 2;
	
	FILE *arq = fopen("emp.txt", "w");
	if (arq == NULL) {
		printf("Nao foi possivel abrir o arquivo");
		return 0;
	}
	
	for(i = 1; i <= n; i++){
		
		printf("Digite o nome do funcionario\n");
		gets(nome);
		fflush(stdin);
		printf("Digite a profissao do funcionario\n");
		gets(profissao);
		fflush(stdin);
		printf("Digite o tempo de servico do funcionario\n");
		scanf("%d", &servico);
		fflush(stdin);
		fprintf(arq, "Nome %s, Profissao %s, Tempo de servico %d\n", nome, profissao, servico);
	}
	return 0;
}
