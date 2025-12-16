#include <stdio.h>

void ChangeValues(int*);

void changeValue(int *a)
{
    *a = *a * 10; // modify the original value
}

int main(){

    int x = 2;
    printf("Before function call: x =  %d\n", x);
    changeValue(&x);
    printf("after function call: x =  %d\n", x);

    return 0;
}