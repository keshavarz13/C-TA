#include <stdio.h>

int i, j;
void f(void){
    int k, m = 10;
    static int n = 0;
    for(k = 0; k < 2; k++){
        int m = 20;
        n++;
        printf("i=%d, j=%d, k=%d, n=%d, m=%d\n", i, j, k, n, m);
    }
}

void main(void){
    f();
    i = 10;
    f();
}