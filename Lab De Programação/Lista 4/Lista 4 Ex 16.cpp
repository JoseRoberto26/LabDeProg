#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tira_letra(){
	char str1[20], str2[20], letra[20];
	int i, j=0;
	printf("Digite a string\n");
	scanf("%s",str1);
	printf("Agora digite a letra que deseja remover da string anterior\n");
	scanf("%s",&letra);
	for (i= 0; i < strlen(str1); i++){
		if (str1[i] != letra[0]){
			str2[j] = str1[i];
			j++;
		}
	}
	printf("String = %s \n String sem %s = %s", str1, letra, str2);
}

int main(){
	tira_letra();
	return 0;
}
