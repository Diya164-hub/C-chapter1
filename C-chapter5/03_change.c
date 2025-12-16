#include <stdio.h>

int change(int a);

int change(int a){
    a = 23; // Misnometr
    return 0;
}
int main(){
    int b = 12;
    change(b); // The value of b remains 12
    printf("b is %d\n", b);
    
    return 0;
}