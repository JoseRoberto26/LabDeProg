#include <stdio.h>

int main ()
{
    int x;
    printf("Insira um numero\n");
    scanf("%d", &x);
    printf ("Antecessor %d\n", x - 1);
    printf("Sucessor %d\n", x + 1);
    return 0;
}
