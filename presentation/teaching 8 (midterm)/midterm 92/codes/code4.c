#include <stdio.h>

int fib(int n){
    int fib1 = 1; 
    int fib2 = 1;
    int i, hold;
    while(fib2 < n ) {
        hold = fib2; 
        fib2 = fib1 + fib2; 
        fib1 = hold;
        if(fib2 == n)
            return fib2+fib1; 
    }
    return -1; 
    
}

int main(){
    int input; 
    scanf("%d" , &input );
    int result = fib(input);
    if(result == -1)
        printf("nadarim!");
    else 
        printf("ghabli : %d, badi : %d"  , result-input, result); 
    return 0;
}


