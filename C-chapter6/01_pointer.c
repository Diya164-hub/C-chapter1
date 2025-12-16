// Chapter 6: Pointers
#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing ti i
    printf("The address of i is %u\n", &i);
    printf("The address of i is %p\n", j);

    printf("the value at address j is %d\n", *(&j));
    return 0;
}