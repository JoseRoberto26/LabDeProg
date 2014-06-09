#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conta_letras(){
	char string[100];
	int i, count = 0;
	printf("Digite a string\n");
	gets(string);
	for(i=0; i <=strlen(string) - 1; i++){
		count ++;
	}
	printf("Numero de letras %d", count);
}

int main(){
	conta_letras();
	return 0;
}
