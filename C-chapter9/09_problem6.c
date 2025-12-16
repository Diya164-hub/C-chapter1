/* Creat an array of 5 complex number created in Problem 5
and display them with the help of a display function.
The value must be taken as an input from the user.*/

#include <stdio.h>

typedef struct vector
{
    int real;
    int imagenary;
} Complex;

void display(Complex c)
{
    printf("The complex number is %d + %di \n", c.real, c.imagenary);
}

int main()
{
    Complex carr[5];
    for (int i = 0; i < 5; i++)
    {
         printf("Enter real part\n");
         scanf("%d", &carr[i].real);
         printf("Enter imaginary part\n");
         scanf("%d", &carr[i].imagenary);
         display(carr[i]);
    }
    return 0;
}