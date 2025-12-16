#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);
    
    i = i + 5; //10
    printf("The value of i is %d\n", i);
    i++; 
    printf("The value of i is %d\n", i);
    i++; //11
    return 0;
}
/*
i++ prints i first  and then increments i (post increment Operator)
++i increments i first and then prints i (pre increment Operator)
i-- prints i first and then decrements i (post decrement Operator)
--i decrements i first and then prints i (pre decrement Operator)
Example:
int i = 5;
printf("%d\n", i++); // prints 5, then i becomes 6
printf("%d\n", ++i); // i becomes 7, then prints 7
printf("%d\n", i--); // prints 7, then i becomes 6
printf("%d\n", --i); // i becomes 5, then prints 5
output:5,7,7,5
*/ 
// i++ -> i is increased by 1
// i-- -> i is decreased by 1