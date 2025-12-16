#include <stdio.h>

int main(){
    // Associativity of operators
    // *,/ follow Left to Right Associativity
    // X*Y/Z is evaluated as (X*Y)/Z
    // X/Y*Z is evaluated as (X/Y)*Z
     int a = 3;
     int b = 6;
     int c = 9;
     
     printf("The value of a*b/c is %d\n", a*b/c); // (3*6)/9 = 2
     printf("The value of a/b*c is %d\n", a/b*c); // (3/6)*9 = 0
     printf("The value is %d\n", a*b/c + 7);
     printf("The value is %d\n", 3*b/2*c + 7*a);
     // 3*b/2*c + 7*a
     // 3*b/2*c + 21
     // 3*6/2*c + 21
     // 18/2*c + 21 
     // 9*c + 21  
     // 9*9 + 21
     // 81 + 21
     // Ans: 102

    return 0;
}
// pro tip: always use parenthesis in case of canfusing expressions
// e.g., X*(Y/Z) or X/(Y*Z) to override default associativity