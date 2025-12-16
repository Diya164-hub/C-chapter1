#include <stdio.h>

int main(){
    int n = 3;
    for (int i = 0; i < 3; i++)
    {
        // This loop runs from 0 ti 2
        // if i = 0 ---> print  1 star
        // if i = 1 ---> print  3 stars
        // if i = 2 ---> print  5 stars
        // no_of_starts = (2*i+1)

        // Tis for loop prints (2*i+1)
        for(int j=0; j<2*i+1;j++){
              printf("*");
        }
        // This printf prints a new line
         printf("\n");
    }
    return 0;
}