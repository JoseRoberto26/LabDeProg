#include <stdio.h>
#include <string.h>

void vira_maiusculo()
  {
    char string[20];
    printf("Entre com a string :\n");
    scanf("%s\n",&string);
    printf("string digitada : %s\n",string);
    printf("Convertendo para maiúsculas : %s\n",strupr(string));
  }
  
int main(){
	vira_maiusculo();
	return 0;
}
