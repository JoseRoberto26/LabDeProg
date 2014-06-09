#include <stdio.h>

void usowhil3(){
	int i;
	i = 0;
	while(i<100){
		i++;
		printf("%d\n", i);
	}
}

void usof0r(){
	int i;
	for(i = 1; i <= 100; i++){
		printf("%d\n", i);
	}
}

void usodowhil3(){
	int i;
	i = 0;
	do {
		i++;
		printf("%d\n", i);
	} while (i <= 100);	
}

int main(){
	usowhil3();
	usof0r();
	usodowhil3();
	return 0;
		
}
