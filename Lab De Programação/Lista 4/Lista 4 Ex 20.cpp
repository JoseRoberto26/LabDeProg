#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void recebestring(){
	char string[999];
	printf("Digite a string\n");
	gets(string);
	printf("Sua string digitada eh %s", string);
}

int main(){
	recebestring();
	return 0;
}
