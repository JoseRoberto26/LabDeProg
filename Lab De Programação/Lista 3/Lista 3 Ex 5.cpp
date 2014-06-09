#include <stdio.h>

void impares(){
	int n, i;
	printf("Digite o numero de impares pra serem printados na tela\n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if (i % 2 != 0){
			printf("%d\n", i);
		}
	}
}

int main(){
	impares();
	return 0;
}
