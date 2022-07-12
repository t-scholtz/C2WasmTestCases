#include <stdio.h>

int main(void) {
    int l;   /* 32-bit datatype */
    short s; /* 16-bit datatype */
    char c;  /* 8-bit datatype */

    l = 0xcafebabe;
    s = l;
    c = l;

    printf("l = 0x%x (%ld bits)\n", l, sizeof(l) * 8);
    printf("s = 0x%x (%ld bits)\n", s, sizeof(s) * 8);
    printf("c = 0x%x (%ld bits)\n", c, sizeof(c) * 8);

    return 0;
}