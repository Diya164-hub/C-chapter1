/* Using problem 1 and solved by calloc().*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)calloc(n,  sizeof(int));
    ptr[0] = 10;
    printf("%d\n", ptr[0]);

    return 0;
}