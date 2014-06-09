#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(){
	char palavra[100];
	printf("Digite a palavra\n");
	gets(palavra);
	strrev(palavra);
	printf("Palavra de tras-pra-frente %s", palavra);
}

int main(){
	inverte();
	return 0;
}
