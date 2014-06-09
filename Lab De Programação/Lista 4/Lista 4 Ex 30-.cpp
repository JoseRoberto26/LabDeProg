#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conta_vogais(){
	char palavra[100], c;
	int i, qtd_vogais = 0, j=0;
	printf("Digite sua string\n");
	gets(palavra);
	printf("Digite a letra desejada para substituir as vogais\n");
	scanf("%s", &c);
	for (i= 0; i <= strlen(palavra); i++){
		if(palavra [i] == 'a' || palavra [i] == 'e' || palavra [i] == 'i' || palavra [i] == 'o' || palavra [i] == 'u' ){
			qtd_vogais ++;
			palavra[i] =  c;
		}
	j++;
	}
	printf("Numero de vogais = %d\n Nova palavra = %s", qtd_vogais, palavra);	
}

int main(){
	conta_vogais();
	return 0;
}
