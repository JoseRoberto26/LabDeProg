#include <stdio.h>

void somadez(){
	int x, soma, i;
	soma = 0;
	printf("Digite o valor\n");
	for (i = 0; i < 10; i++){
		scanf("%d", &x);
		soma = soma + x;
	}
	printf("Valor da soma %d\n", soma);
}

int main(){
	somadez();
	return 0;
}
