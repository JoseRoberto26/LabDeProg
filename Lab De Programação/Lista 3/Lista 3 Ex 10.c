# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

# define total 10

int contador(char *palavra,int tamanho_string){
    int e, count = 0;
    for (e=0;e<tamanho_string;e++){
        if (palavra[e] == '1'){
            count++;
        }
    }
    return count;
}


void main(){
    char word[total] = "100110010";
    printf("%d\n",contador(word,total));
}
