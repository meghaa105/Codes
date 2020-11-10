#include <stdio.h>

const int MAX = 4;

int main () {

   char *names[] = {
      "Hearts","Diamonds","Clubs","Spades"
   };

   int i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }

   printf("%s\n",*(names+2));
   printf("%c",*((*names)+2));

   return 0;
}
