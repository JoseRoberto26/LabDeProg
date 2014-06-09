#include <stdio.h>

void divisores(){
	int x, i;
	printf("Digite um numero para que se calcule os divisores\n");
	scanf("%d", &x);
	printf("Seus divisores sao:\n");
	for(i = 1; i <= x; i++){
		if(x % i == 0){
			printf("%d\n", i);
		}
	}
}

int main(){
	divisores();
	return 0;
}
