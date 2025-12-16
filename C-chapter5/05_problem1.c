// Program using function to find average of three numbers.

#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3;
} 
int main()
{
 int a = 3, b = 6, c =5;
 printf("The value of a, b and c is %f", average(a, b, c));
 return 0;
}