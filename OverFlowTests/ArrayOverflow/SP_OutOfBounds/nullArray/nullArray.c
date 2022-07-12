#include <stdio.h>
int main()
{
   int ar[5];
   ar[4]=NULL;

   for(int i=0; i<10;i++){
      printf("Loop num: %d\n",i);
      printf("Loop val: %d\n",ar[i]);
   }
}