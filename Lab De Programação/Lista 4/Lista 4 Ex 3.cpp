#include <stdio.h>
#include<stdlib.h>
#include <string.h>

void tamanhostring(){
	char string[999];
	int tamanho;
	printf("Digite sua string\n");
	gets(string);
	tamanho = strlen(string);
	printf("Tamanho da string = %d", tamanho);
}

int main(){
	tamanhostring();
	return 0;
}

