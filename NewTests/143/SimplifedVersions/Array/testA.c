#include <stdio.h>
int main(){
   int  n;
   short *from, *to;
   short a[10], b[10];
   for(n = 0; n < 11; n++) {
       a[n] = n;
       b[n] = -1;}
   from = a;
   to = b;
   for (n = 0; n < 17; n++)
   {
    *to++ = *from++;
   }
   
   for(n = 0; n < 10; n++){
       printf("N = %d\n", n);
       printf("a: %d\n", a[n]);
       printf("b: %d\n", b[n]);
       if(a[n] != b[n]){
           printf("%d\n", 1);            
           return 1;
           }
   }
   return 0;}