// chapter 5: Functions and Recursioneused
// A function is a block of code which performs a particular task.
// A function can be reused by the programmer in a given program any number of times.

#include <stdio.h>
// Function prototype
int sum(int, int);

//Function definition
int sum(int x, int y){
   // printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
     int a = 1;
     int b = 2;

    //  int c = a + b; // a and b is parameters
    //  printf("The sum is %d\n", c);
    int c = sum(a,b); // Function call
    printf("%d\n", c);

    int a1 = 10;
    int b1 = 11;
    int c1 = sum(a1,b1);
    printf("%d\n", c1);

    int a2 = 24;
    int b2 = 45;
    int c2 = sum(a2,b2);
    printf("%d\n", c2);


    return 0;
}