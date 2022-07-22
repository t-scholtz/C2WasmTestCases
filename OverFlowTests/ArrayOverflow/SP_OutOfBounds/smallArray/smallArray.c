#include <stdio.h>
int main()
{
   int ar[5] = {1,2,3,4,5};

   for(int i=0; i<10;i++){
      printf("Loop num: %d\n",i);
      printf("Loop val: %d\n",ar[i]);
   }
}