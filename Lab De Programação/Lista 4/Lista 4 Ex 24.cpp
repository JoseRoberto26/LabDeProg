#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main() 
{ 
	int idade;
	char nome[999], sexo[2];
	printf("Digite seu nome\n");
	scanf("%s", nome);
	printf("Digite sua idade\n");
	scanf("%d", &idade);
	if (idade <= 150 or idade > 0){
		printf("Digite seu sexo\n");
		scanf("%s", sexo);
		if(idade > 17){
			if(sexo[0] == 'F'){
				printf("%s, brasileira do sexo feminino e maior de idade, pode dirigir", nome);
				return 0;
			}
			if(sexo[0] == 'M'){
				printf("%s, brasileiro do sexo masculino e maior de idade, pode dirigir", nome);
				return 0;
			}
			else{
				printf("Digite um sexo valido (M ou F)");
				return 0;
			}
		}
		else{
			if(sexo[0] == 'F'){
				printf("%s, brasileira do sexo feminino e menor de idade, nao pode dirigir", nome);
				return 0;
			}
			if(sexo[0] == 'M'){
				printf("%s, brasileiro do sexo masculino e menor de idade, nao pode dirigir", nome);
				return 0;
			}
			else{
				printf("Digite um sexo valido (M ou F)");
				return 0;
			}
		}
	}
	else{
		printf("Digite uma idade valida");
	}
return 0;
}
