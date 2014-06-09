#include <stdio.h>

int main (void) 
{ 
  int i, n, teste;  
  printf ("Entre com um número inteiro maior que 1 : \n"); 
  if (scanf ("%d", &n) < 1){
  	printf ("Numero invalido\n");
    return 0; 
  }
  else{
  
  	for (i = 2; i < n; i++) 
    	if (n % i == 0) {
		 teste = 1;
		}
  		if (!teste) {
  
  		  printf ("%d numero primo\n", n); 
 		 }
  		else{
    	printf ("%d nao eh um numero primo", n); 
  		return 0; 
		}
  }
return 0;
}
