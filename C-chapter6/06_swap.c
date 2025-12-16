#include <stdio.h>

void swap(int* a, int*  b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of is a %d and value of b is %d\n", a, b);
    return 0;
}