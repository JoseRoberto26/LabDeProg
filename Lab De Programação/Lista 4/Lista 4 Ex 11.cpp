#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char string[100];
	int i,tam = strlen(string);
	printf("Digite a string\n");
	gets(string);
	for(int i = 0; i <= tam; i++){
		if(string[i] == 'a'){
			string[i] = '*';
		}
	}
	printf("String sem a vogal A e invertida = %s", strrev(string));
	return 0;
}
