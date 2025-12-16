// Chapter 11: dynamic memory allocation in C
/* Function for DMA in C
 1. malloc()
 2. calloc()
 3. free()
 4. realloc()*/

 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in C
    ptr[0] = 3;
    ptr[1] = 6;   
    printf("%d", ptr[0]);
    return 0;
 }