#include <stdio.h>

int main()
{
    int a = -6;
    int b = 3;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;
    int z; z = b*a; // just to avoid unused variable warning
    printf("The value of a is %d and value of b is %d\n", a, b, c, d, e, f, g);
    // Modulus operator is used to get the remainder
    printf ("The reminder when a is divided by b is: %d\n", g);
    printf("Addition: %d + %d = %d\n", a, b, c);
    printf("Subtraction: %d - %d = %d\n", a, b, d);
    printf("Multiplication: %d * %d = %d\n", a, b, e);
    printf("Division: %d / %d = %d\n", a, b, f);
    printf("Modulus: %d %% %d = %d\n", a, b, g);
    printf("The value of z is %d\n", z);
    return 0;
}