#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Digite qual operacao devera ser realizada\n 1 - Soma de dois numeros\n 2 - Diferenca entre dois numeros\n 3 - Produto entre dois numeros\n 4 - Divisao entre dois numeros\n ");
    scanf("%d", &x);
    if (x = 1)
    {
        printf("Digite os numeros a serem somados\n");
        scanf("%d", &y);
        scanf("%d", &z);
        printf("Resultado %d", y + z);
        return 0;
    }
     if (x = 2)
    {
        printf("Digite os numeros para a subtra��o\n");
        scanf("%d", &y);
        scanf("%d", &z);
        if(y > z)
        {
            printf("Resultado %d", y - z);
            return 0;
        }
        else
        {
             printf("Resultado %d", z - y);
             return 0;
        }
    }
     if (x = 3)
    {
        printf("Digite os numeros a serem multiplicados\n");
        scanf("%d", &y);
        scanf("%d", &z);
        if (z > y )
        {
            printf ("Operacao nao pode ser realizada");
            return 0;
        }
        else {
            printf("Resultado %d", y * z);
        return 0;
        }
    }
     if (x = 1)
    {
        printf("Digite os numeros a serem divididos");
        scanf("%d", &y);
        scanf("%d", &z);
        if (z = 0)
        {
            printf("Operacao nao pode ser realizada");
            return 0;
        }
        else {
            printf("Resultado %d", y / z);
            return 0;
        }
    }
    else
    {
      printf("Digite um valor valido de opera��o entre 1 e 4");
      return 0;
    }

    return 0;


}
