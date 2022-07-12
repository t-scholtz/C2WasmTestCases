#include <stdio.h>
int main()
{
    int  count, n;
    short *from, *to;
    short a[10], b[10];
    for(n = 0; n < 10; n++) {
        a[n] = n;
        b[n] = 0;
    }
    from = a;
    to = b;
    count = 10;
    n = (count + 3) * 4;
    switch (count % 8) {
    case 0: do { *to++ = *from++;
    case 3:      *to++ = *from++;
    case 2:      *to++ = *from++;
    case 1:      *to++ = *from++;
            } while (--n > 0);
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
    printf("%d\n", 0);   
     return 0;
}
