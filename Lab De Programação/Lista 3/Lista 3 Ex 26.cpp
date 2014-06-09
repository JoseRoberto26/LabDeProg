#include <stdio.h>
#define N 10
int main ()
{
    int a[N], cont, i, j, aux;
    printf("Entre com os elementos do vetor: ");
    for (i=0; i<N; i++)
        scanf("%d", &a[i]);
    for (i=0; i<N-1; i++)
        for (j=i+1; j<N; j++)
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
                

            }
    aux = a[0];
    cont = 1;
    for (i=1; i<N; i++)
        if (a[i] != aux)
        {
            if (cont > 1)
                printf("\n%d - %d vezes", aux, cont);
            aux = a[i];
            cont = 0;
        }
        else
            cont++;
	if (cont > 1){
    	printf("\n%d - %d vezes", aux, cont);
	}
return 0;
}
