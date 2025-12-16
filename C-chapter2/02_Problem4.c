#include <stdio.h>
int main()
// Explain step by step evaluation of 3*x/y - z+k, Where x=2, y=3, z=3, k=1
{
 int x = 2;
 int y = 3; 
 int z = 3;
 int k = 1;
 float e = 3 * x / y - z + k;
 // step 1: 3 * x / y - z + k
    // step 2: 3 * 2 / y - z + k
    // step 3: 6 / y - z + k
    // step 4: 6 / 3 - z + k
    // step 5: 2 - z + k
    // step 6: 2 - 3 + k
    // step 7: -1 + k
    // step 8: -1 + 1
    // step 9: 0
    printf("The value of the expression 3*x/y - z + k is %f\n", e);

    return 0;
}
// Answer: The value of the expression 3*x/y - z + k is 0.000000