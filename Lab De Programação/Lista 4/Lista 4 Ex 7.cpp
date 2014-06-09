#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void retira_vogal(){
	char string[999], nova[100];
	int i, j=0, tam = strlen(string);
	gets(string);
	for(int i = 0; i <= tam; i++){
		if(string[i] != 'a' || string[i] != 'e' || string[i] != 'i' || string[i] != 'o' || string[i] != 'u') {
			nova[j] = string[i];
			j++;
		}
	}
	printf("%s", nova);
}

int main(){
	retira_vogal();
	return 0;
}


