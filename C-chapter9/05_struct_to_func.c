#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[10];
}; // semicolon is important

void show(struct employee e); // function prototype

void show(struct employee e)
{
    printf("code is %d\n salary is %f\n name is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 12345;
    strcpy(e1.name, "Dia");
    e1.salary = 72.90;

    printf(" %d\n %.2f\n %s\n", e1.code, e1.salary, e1.name);

    return 0;
}