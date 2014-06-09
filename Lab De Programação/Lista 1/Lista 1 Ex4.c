#include <stdio.h>


 int main() {

   int i;
   scanf("%d", &i);
   for ( i = 32; i < 127; i++ ) {
       printf( "%c[%d]\n", i , i );
   }
return 0;
}
