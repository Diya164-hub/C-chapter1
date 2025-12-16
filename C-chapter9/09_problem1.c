/* Creaate a two-dimensional vector using structures in C*/

#include <stdio.h>

struct vector{
    int i;
    int j;
};

int main(){
    struct vector v = {3, 4};
    printf("The value of vector is %d + %d j", v.i, v.j);

    return 0;
}