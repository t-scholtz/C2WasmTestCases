#include <stdio.h>
int main()
{
    int Count;
    int Array[3];
    for (Count = 1; Count <= 3; Count++)
        {
        Array[Count-1] = Count * Count;
        }
    for (Count = 0; Count <= 3; Count++)
        {
        printf("%d\n", Array[Count]);
        }
    return 0;
}