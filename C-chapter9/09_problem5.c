/* Write a program with a structure representing a 
complex number.*/

#include <stdio.h>

typedef struct vector
{
    int real;
    int imagenary;
} Complex;

int main(){
    Complex c = {4, 5};
    printf("The complex number is %d + %di \n", c.real, c.imagenary);
    return 0;
}