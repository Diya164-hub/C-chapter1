#include <stdio.h>

int main(){
    for (int i = 0; i < 10000; i++)
    {
        if(i==5){
            break; // exit the loop now!
            // continue; // skip this iteration now
        }
        printf("i is %d\n", i);
    }
    printf("For loop is done");
    return 0;
}
// continue: statement is used to immediately move to the next iteration of the loop,
/*
The control is taken to the next iteratioin thus skipping everything below "continue"
inside the loop fort the iteration.
*/