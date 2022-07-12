#include <stdio.h>
int main()
{
   int ar[]={1,2,3,4,5};

   for(int i=6; i>-5;i--){
      printf("Loop num: %d\n",i);
      printf("Loop val: %d\n",ar[i]);
      printf("#############\n");
   }
}