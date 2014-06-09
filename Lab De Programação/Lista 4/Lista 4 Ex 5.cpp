#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main() 
{ 
 	char s1[999]; 
 	char s2[999], *pt; 
 	printf("Digite a string\n");
	gets(s1);
 	printf("Digite a substring a ser localizada dentro da primeira string\n");
	gets(s2);
 	pt = strstr(s1, s2); 
 	if(pt){
 	 printf("%s esta na string\n", s2); 
}
 	else{
 	 puts("a substring nao foi localizada\n"); 
} 
	return(0); 
} 


