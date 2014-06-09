#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void concatena_n(){
	char str1[999], str2[999];
	int n, i;
	printf("Digite a primeira string\n");
	gets(str1);
	printf("Digite a segunda string\n");
	gets(str2);
	printf("Digite o numero de caracteres para concatenar da string 1 na string 2\n");
	scanf("%d",&n);
	printf("Strings concatenadas até n = %s", strncat(str2, str1, n));
}

int main(){
	concatena_n();
	return 0;
}
