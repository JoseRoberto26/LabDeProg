#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quatro_letras(){
	int i;
	char string[999];
	printf("Digite string\n");
	gets(string);
	for (i = 0; i <= 3; i++ ){
		printf("%c", string[i]);
		}
	return 0;
}
	
int main(){
	quatro_letras();
	return 0;
}
