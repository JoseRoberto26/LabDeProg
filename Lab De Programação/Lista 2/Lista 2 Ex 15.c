#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Perguntas 5
int randomBetween(int inicio,int fim)
{
    return inicio + (rand()%((fim+1)-inicio));
}
int main()
{
    srand(time(NULL));
    int contador,a,b,resultado,entrada;
    int acertos = 0;
    printf("Responda as questões a seguir :\n");
    for(contador = 0; contador<Perguntas; contador++)
    {
        a= randomBetween(1,50);
        b= randomBetween(1,50);
        printf("%d + %d = ",a,b);
        resultado = a+b;
        scanf("%d",&entrada);
        if(entrada == resultado)
        {
            acertos++;
        }
    }
    printf("Acertos %d\n Erros %d\n.", acertos, Perguntas-acertos);
}
