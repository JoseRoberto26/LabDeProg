#include <stdio.h>

void contagem(){
	int i;
	i = 0;
	while (i < 10){
		i++;
		printf("%d\n", i);
	}
}

int main(){
	contagem();
	printf("FIM!");
	return 0;
}
