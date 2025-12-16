#include <stdio.h>

int main()
{
    int i = 0;
    while (2<10)
    {
        printf("the value of i is %d\n", i);
        i++;
    }
    return 0;
}
/* note: This is an infinite loop because the condition '2<10' is always true.
If the condition never becomes false, the while loop keeps getting excuted. 
Such loop is known as an infinite loop.*/