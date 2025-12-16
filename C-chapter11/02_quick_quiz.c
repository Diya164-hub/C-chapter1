#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    float* ptr;
    scanf("%d", &n);
    ptr = (float *)malloc(n * sizeof(float));
    ptr[0] = 3.12;
    ptr[1] = 6.16;
    ptr[2] = 5.78;
    ptr[3] = 8.79;
    ptr[4] = 12.469;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.3f\n", ptr[4]);

    return 0;
}