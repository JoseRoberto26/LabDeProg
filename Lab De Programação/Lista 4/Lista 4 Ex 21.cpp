#include <stdio.h> 
#include <string.h> 
#include <string.h> 

void compara_ordem() {
	char string1[999], string2[999];
	printf("Digite duas strings para serem comparadas em ordem alfabetica\n");
	gets(string1);
	gets(string2);
	if(stricmp(string1, string2) == 0){
		printf("São iguais");
	}
	if (stricmp(string1, string2) < 0 ){
		printf("%s vem antes de %s", string1, string2);
	}
	if (stricmp(string1, string2) > 0){
		printf("%s vem antes de %s", string2, string1);
	}
}

int main(){
	compara_ordem();
	return 0;
}
