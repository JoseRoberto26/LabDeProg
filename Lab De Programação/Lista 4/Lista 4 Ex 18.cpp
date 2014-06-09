#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int i;
	char string[100], c[100];
	printf("String\n");
	gets(string);
	printf("Caractere\n");
	gets(c);
	printf("Indice\n");
	scanf("%d", &i);
	for(i; i <= strlen(string); i++){
		if (string [i] == c[0]){
			printf("Caractere %s encontrado na posicao %d", c, i);
			return 0;
		}	
	}
}
