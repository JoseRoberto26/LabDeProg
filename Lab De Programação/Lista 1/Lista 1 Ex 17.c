#include <stdio.h>

int main()
{
    int y;
    float x;
    printf("Digite sua altura em metros e seu sexo sendo 1 para homem e 2 para mulher\n");
    scanf("%f", &x);
    scanf("%d", &y);
    if (y == "1"){

        printf("Seu peso ideal é %f \n", (72.7 * x) - 58);
    }
    else if (y == "2"){
        printf("Seu peso ideal é %f \n", (62.1 * x) - 44.7);
    }
    return 0;
}
