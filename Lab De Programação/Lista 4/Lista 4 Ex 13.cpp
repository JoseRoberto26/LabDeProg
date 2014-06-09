#include <stdio.h>
#include <string.h>
 
int main(int argc,char* argv[]){
 	char string[999];
	int i=0, chave = 1;
	printf("Digite uma string\n");
	gets(string);
	printf("String resultante:\n  ");
	for(i=0;i<strlen(string);i++)	
	{
 		int enc=(int)string[i]+chave;
		printf("%c",(char)enc);
		     } 
printf("\n\n");
return 0; 
}
