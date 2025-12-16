/* We can use the 'typedef' keyword to creat an alias name for data
types in C.
'typedef' is more commonly used with structures.*/
#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
} Emp; // semicolon is important
int main(){
    // typedef int Grenger;
    // int a = 88;
    // printf("The value of a is %d \n", a);

    // typedef struct employee Emp; same as typedef struct employee but when, you need to removed typedef before struct employee.
    Emp e1;
    Emp* ptr1 = &e1;
    e1.code = 12345;
    strcpy(e1.name, "Diaa");
    e1.salary = 72.90;

    printf(" %d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf(" %d %.2f %s\n", ptr1->code, ptr1->salary, ptr1->name);

    return 0;
}