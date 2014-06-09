#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[999];
	printf("Digite um nome\n");
	gets(nome);
	if(nome[0] == 'A' || nome[0 == 'a']){
		printf("%s", nome);
		return 0;
	}
	else{
		printf("Nome nao comeca com a letra 'A'");
		return 0;
	}
}
