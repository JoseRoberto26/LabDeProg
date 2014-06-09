#include <stdio.h>
#include <string.h>
 
void invertido(){
	char str1[15], inv[15];
	printf("Digite a string para ser invertida\n");
	gets(str1);
	strcpy (inv, strrev(str1));
	printf("%s\n", inv);
	strcpy (strrev(str1), str1);
	if ( strcmp(inv, str1) == 0){
		printf("eh palindromo\n");
	}
	else{
		printf("nao eh palindromo\n");
	}
}

int main(){
	invertido();
	return 0;
}
