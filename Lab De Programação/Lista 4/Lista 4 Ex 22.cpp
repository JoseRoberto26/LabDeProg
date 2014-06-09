#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void minusculo() 
{ 
 char s1[999]; 
 printf("Digita a String \n");
 gets(s1);
 strlwr(s1); 
 printf("String minuscula %s", s1);  
} 

int main(){
	minusculo();
	return 0;
}
