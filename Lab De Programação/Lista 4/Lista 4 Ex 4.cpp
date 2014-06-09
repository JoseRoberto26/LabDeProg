#include <stdio.h> 
#include <string.h> 
#include <string.h> 

bool compara() { 

	char str1[100], str2[100]; 
 	printf("Entre com uma string:\n" ); 
 	gets( str1 ); 
 	printf("Entre com outra string:\n "); 
 	gets( str2 ); 
 	if(strcmp(str1,str2)){
 		printf("As duas strings sao diferentes.");
		return false; 
} 
	else{
	printf("As duas strings sao iguais."); 
 	return true;
 } 
} 

int main(){
	compara();
	return 0;
}
