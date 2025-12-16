#include <stdio.h>
float f2c(float f);

float f2c(float f)
{
    return (f - 32)*5.0/9.0;
    // This is formula of Fahrenhit to celsius 
}
int main(){
    float f = 59;
    printf("Fahrenheit to Celsius for %f is %.2f", f, f2c(f));
    return 0;
}
// Celsius to Fahrenheit formula is ((9*c)/5) + 32