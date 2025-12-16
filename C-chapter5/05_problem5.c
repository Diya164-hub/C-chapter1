#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}
//output: 6 6 4
// second output is 4 5 5 beacouse 