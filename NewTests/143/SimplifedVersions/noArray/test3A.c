#include <stdio.h>
int main(){
    short *from, *to;
    short a, b;
    a = 5;
    b = -1;
    from = &a;
    to = &b;

    *to++ = *from++;
    *to++ = *from++;
   
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    if(a != b){
        printf("%d\n", 1);            
        return 1;
        }
   
   return 0;}