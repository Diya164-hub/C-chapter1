#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[10];
}; // semicolon is important

int main(){
    struct employee facebook[100]; // an array of atructures
    // We can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 45;
    struct employee Diaa = {100, 207, "Dia"};
    printf(" %d %.f %s", Diaa.code, Diaa.salary, Diaa.name);
   
    
    return 0;
}