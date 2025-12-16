#include <stdio.h>

int main(){
    // Pointer arithmetic using integer pointer
    // int a = 5;
    // int* ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);

    // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    // Pointer arithmetic using character pointer

    char a = 5;
    char* ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);

    ptr++;
    printf("The value of ptr is %u\n", ptr);
    return 0;
}