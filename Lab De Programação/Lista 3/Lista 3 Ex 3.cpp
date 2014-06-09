#include "stdio.h"
 
void fibonacci_maior_que_N(){
  int a, b, auxiliar, i, n;
  a = 0;
  b = 1;
  auxiliar = 0;
  printf("Digite um número: ");
  scanf("%d", &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n", b);
 
  while(n > auxiliar)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
 
    printf("%d\n", auxiliar);
  }
}

int main(){
	fibonacci_maior_que_N();
	return 0;
}
