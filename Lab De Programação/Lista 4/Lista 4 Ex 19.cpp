#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void i_j(){
	int i, j;
	char string[999];
	printf("Digite string e nums\n");
	gets(string);
	scanf("%d", &i);
	scanf("%d", &j);
	if (i > j){
		for (j = j; j <= i; j++ ){
			 
		printf("%c\n", string[j]);
		system("pause");
		}
	}
	if(j > i){
		for(i = i; i <= j; i++){
			printf("%c\n", string[i]);
		system("pause");
		}
	}
	else{
		printf("%c\n", string[i]);
		system("pause");
	}
}

int main(){
	i_j();
	return 0;
}
