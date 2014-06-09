#include <stdio.h>

int main(){
	int x, soma = 0, qtd = 0, maior, menor, qtd_pares = 0, qtd_impares = 0, soma_pares = 0;
	do{
		printf("Digite quantos numeros desejar. Para encerrar a inserção de dados, digite 0\n");
		scanf("%d", &x);
		qtd ++;
		soma += x;
		if (x % 2 == 0){
			qtd_pares++; 
			soma_pares += x; 
		} 
		else { 
			qtd_impares++; 
		}
		if (qtd == 1) 
			maior = menor = x; 
		else { 
			if (maior < x){
				maior = x; 
			}
			if (menor > x){
				menor = x; 
			}
		}
	} 		 
	while (x != 0);
	printf("Soma dos números digitados: %d\n", soma); 
	printf("Quantidade dos números digitados: %d\n", qtd); 
	printf("Média dos números digitados: %.2f\n", (float) soma / qtd); 
	printf("Maior número digitado: %d\n", maior); 
	printf("Menor número digitado: %d\n", menor); 
	printf("Média dos números pares: %.2f\n", (float) soma_pares / qtd_pares);  
return 0; 
}
