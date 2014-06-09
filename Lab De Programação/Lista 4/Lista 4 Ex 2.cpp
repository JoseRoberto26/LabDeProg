#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checa_palindromo()
{
	char string[100], invertido[100];
	printf("Digite a string\n");
	gets(string);
	strcpy(invertido, strrev(string));
	printf("%s\n", invertido);
	strcpy(strrev(string), string);
	if(strcmp(string, invertido) != 0)
		{
			printf("Nao eh palindromo!\n");
		}
		else
		{
			printf("Eh palindromo!\n");
		}
	printf("\n\n"); 
	system("pause");
	return(0);
}

int main(){
	checa_palindromo();
	return 0;
}
