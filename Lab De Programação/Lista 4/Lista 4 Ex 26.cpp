#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void aceita() {
	char nome[999], sexo[1];
	int idade;
	printf("Digite o nome,o sexo(M ou F) e idade\n");
	gets(nome);
	gets(sexo);
	if(strcmp(sexo, "M") == 0){
		printf("N�O ACEITA");
	}
	scanf("%d", &idade);
	if (idade < 25){
		if (strcmp(sexo, "F") == 0){
			
		printf("%s ACEITA", nome);
		}
	    else {
		printf("N�O ACEITA");
		}
	}
	else {
		printf("N�O ACEITA");
	} 
}

int main(){
	aceita();
	return 0;
}
