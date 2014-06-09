#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void flush(){
	char x;
	while (((x=getchar())!=EOF)&&(x!='\n'));
}

void lista(){
	char vetor[40][100], nome[100];
	int i, j, x;
	for(i = 0; i <= 40; i++){
		printf("Digite um nome para adiciona-lo a lista\n");
		scanf("%s", vetor[i]);
		flush();
		printf("Deseja inserir mais algum nome na lista ?\n (1 = sim, 0 = nao)\n");
		scanf("%d", &x);
		flush();
		if (x <= 0 || x > 1){
			printf("Digite o nome que deseja encontrar na lista\n");
			scanf("%[^\n]s", nome);
			flush();
			for (j = 0; j <= 40; j++){
				if (strcmp(nome, vetor[j]) == 0){
					printf("Nome %s presente na lista na posicao %d", nome, j);
					return;
				}
				else if (j == 40){
					printf("Nome não esta presente na lista");
					return;
				}
			}
		}
	}
}

int main(){
	lista();
	return 0;
}
