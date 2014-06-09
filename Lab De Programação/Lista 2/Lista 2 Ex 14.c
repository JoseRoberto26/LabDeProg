#include <stdio.h>
typedef struct {
    int horas;
    int minutos;
}Horario;


float getTaxa(Horario entrada,Horario saida)
{
    int Horas;
    float Taxa;
    if(entrada.horas>saida.horas)
    {
        Horas = (saida.horas+24) - entrada.horas ;
    }else
    {
        Horas = (saida.horas) - entrada.horas ;
    }
    if(entrada.minutos<saida.minutos)
    {
        Horas++;
    }
    if(Horas >= 5)
    {
        Taxa =6.80f+((Horas-5)*2);
    }else
    {
        if(Horas>=3)
        {
            Taxa += 2+(Horas*1.40f);
        }else
        {
            Taxa = 1*Horas;
        }
    }
    return Taxa;
}
int main()
{
    Horario entrada,saida;
    float taxa;
    printf("Insira o horario de entrada:");
    printf("\nHoras: ");
    scanf("%d",&entrada.horas);
    printf("Minutos: ");
    scanf("%d",&entrada.minutos);
    printf("Insira o horario de saida:");
    printf("\nHoras: ");
    scanf("%d",&saida.horas);
    printf("Minutos: ");
    scanf("%d",&saida.minutos);
    taxa = getTaxa(entrada,saida);
    printf("A taxa cobrada e : %.2f R$",taxa);

}
