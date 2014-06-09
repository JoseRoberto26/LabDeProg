#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void concatena(){
	char str1[100], str2[100];
	printf("Digite a primeira string\n");
	gets(str1);
	printf("Digite a segunda string\n");
	gets(str2);
	printf("Strings concatenadas = %s %s", str1, str2);
}

int main(){
	concatena();
	return 0;
}
