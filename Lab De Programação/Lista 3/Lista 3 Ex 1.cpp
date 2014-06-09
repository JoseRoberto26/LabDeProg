#include <stdio.h>


void maior_menor(){
int x, maior, menor;
maior = -1;
menor = 999;

while (x >= 0){
  scanf("%d", &x);
  if(x > maior){
   maior = x;
  }
  if (x < menor){
   menor = x;
  }
 }
printf("maior = %d e menor = &d\n", maior, menor);

}


int main (){
 
 
 printf("Digite números inteiros para que se compare o maior e o menor numero. Quando desejar parar digite um numero\n");

maior_menor();
 
return 0;
}
