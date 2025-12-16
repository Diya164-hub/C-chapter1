/* Write a program to illustrate the use of arrow operitor
-> in C. */

#include <stdio.h>

typedef struct Emp
{
    int salary;
    float score;
} Employee ;

int main(){
    Employee e1;
    Employee* ptr1 = &e1;

    // (*ptr1).salary = 72.90; //same as ptr1->salary = 72.90;
    // (*ptr1).score = 88.5; //same as ptr1->score = 88.5;

    ptr1->salary = 72.90;
    ptr1->score = 88.5;
    printf("The value of salary is %d The value of score is %.2f\n", ptr1->salary, ptr1->score);
    return 0;
}