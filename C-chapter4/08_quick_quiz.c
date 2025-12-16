#include <stdio.h>

int main()
{
    int n, i=1;
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;

    } while(i<=n);  // This line will cause a compilation error

    return 0;
}