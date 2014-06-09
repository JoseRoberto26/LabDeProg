#include<stdio.h>
#include<stdlib.h>
 
int main() {
    float P, H, IMC;
    
    printf("Digite o seu peso:\n");
    scanf("%f", &P);
    
    printf("Digite a sua altura:\n");
    scanf("%f", &H);
    
        IMC = P / (H*H);
        if (IMC < 26){
            printf("O seu Idice de Massa Corporea e %.2f e esta Normal\n", IMC );
            return 0;
			}
            
        if (IMC >=26 & IMC <30)
		{
           printf ("O seu Indice de Massa Corporea e %.2f e voce esta Obeso\n", IMC);
           return 0;
		   }
        
        if (IMC >=30){
           printf("O seu Indice de Massa Corporea e %.2f e voce esta com Obesidade Morbida\n", IMC);
           return 0;
		   }        
    }
