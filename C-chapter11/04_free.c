#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr1, *ptr2;

    // Input size
    scanf("%d", &n);

    //USING MALLOC
    ptr1 = (int *)malloc(n * sizeof(int));
    if (ptr1 == NULL)
    {
        printf("Malloc failed\n");
        return 1;
    }

    ptr1[0] = 10;
    printf("Using malloc: %d\n", ptr1[0]);

    free(ptr1); // free malloc memory


    //USING CALLOC
    ptr2 = (int *)calloc(n, sizeof(int));
    if (ptr2 == NULL)
    {
        printf("Calloc failed\n");
        return 1;
    }

    ptr2[0] = 20;
    printf("Using calloc: %d\n", ptr2[0]);

    free(ptr2); // free calloc memory

    return 0;
}