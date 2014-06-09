#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char vet[100], resultvet[100];
	int i, j=0;
	printf("Digite a frase\n");
	gets(vet);
	for (i= 0; i <= strlen(vet); i++){
		if(vet[i] != ' '){
			resultvet[j] = vet[i];
			j++;
		}
	}
	printf("%s", resultvet);
	return 0;	
}
