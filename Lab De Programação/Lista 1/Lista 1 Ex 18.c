#include <stdio.h>

int main(){
    float peso;
    float excesso = 0;
    float multa = 0;
    printf("Insira o peso pescado\n");
    scanf("%f", &peso);
    if (peso > 50){
        excesso = peso - 50;
        multa = excesso * 4;
        printf("Excesso igual a %f \n", excesso);
        printf("Multa igual a %f \n", multa);
        }
    else printf ("Excesso igual a 0  e multa igual a 0");
    return 0;

}
