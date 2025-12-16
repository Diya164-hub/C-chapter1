#include <stdio.h>

int main()
{
  // if we write int a = 9 then will get answer is 4 as both are int
  float a = 9.0;// if we write float a =a 9.0 the will get answer as 4.500000 as 9.0 is float
  int b = 2;
  float c = a/b; 
  // if you write flote c = 9/2 then we write 9/2 or a/b bothe are correct in printf
  printf("The value of a/b is %f\n", c);
  // if you write float c = (float)a / (float)b; then also we can write a/b in printf
  // if you write float c = (float)(a/b); then it will give 4.000000 because here a/b is done
  // first as both are int so it gives 4 and then it is converted to float
  // int + int = int
  // int + float = float
  // float + float = float
    return 0;
}