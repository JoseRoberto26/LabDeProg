#include <stdio.h>

int main()
{
    float x, y;

    printf("Digite o salario e o valor da prestação do emprestimo\n");

    scanf("%f", &x);
    scanf("%f", &y);

    if (y > (x * 0.20))
    {
        printf ("Emprestimo nao pode ser concedido");
        return 0;
    }

    else
    {
        printf("Emprestimo concedido");
        return 0;
    }
}
