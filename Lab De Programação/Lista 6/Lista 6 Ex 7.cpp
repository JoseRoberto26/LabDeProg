#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	char arquivo[1000];
	printf("Digite o arquivo\n");
	gets(arquivo);
	
	FILE *arq = fopen(arquivo, "r");
	if (arq == NULL){
		printf("Nao foi");
		exit(1);
	}
	int n, m, s;
	fscanf(arq, "%d"  "%d", &n, &m);
	printf("Soma dos precos %d\n", s = n + m);
	return 0;
}
