#include <stdio.h>
#include <string.h>
 
int main(int argc,char* argv[]){
 	char string[999];
	int i=0, chave = 3;
	printf("Digite a string para ser utilizado o Codigo de Cesar\n");
	gets(string);
	printf("Encriptacao:\n");
	for(i=0;i<strlen(string);i++)	
	{
 		int enc=(int)string[i]+chave;
		printf("%c",(char)enc);
		     } 
return 0; 
}
