/* Write a function 'sumVector' which returns the sum of two vectors
passed to it. The vectors must be two-dimensional.*/

#include <stdio.h>

struct vector
{
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.i = v1.i + v2.i;
    result.j = v1.j + v2.j;
    return result;
};

int main()
{
    struct vector v1 = {3, 4};
    struct vector v2 = {5, 6};
    struct vector v = sumVector(v1, v2);
    printf("The sum of vectors is %d i + %d j\n", v.i, v.j);
    return 0;
}