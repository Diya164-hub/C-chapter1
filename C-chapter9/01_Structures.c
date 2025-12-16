// Chapter 9: Structures
/* Array and strings - Slimilar data(int, float, char)
Structures can hold - Dissimilar data.*/

#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[10];
}; // semicolon is important

int main(){
    struct employee e1, e2;
    e1.code = 12345;
    strcpy(e1.name, "Diaa");
    e1.salary = 72.90;

    printf(" %d\n %.2f\n %s\n", e1.code, e1.salary, e1.name);

    return 0;
}