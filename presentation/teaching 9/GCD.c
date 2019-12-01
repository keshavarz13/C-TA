#include <stdio.h>

int GCD(int a, int b){
    if(b == 0)
         return a;
    else 
         return GCD(b, a % b);
}

int main(void){
    
    printf("GCD(1, 10) = %d \n", GCD(1, 10));
    printf("GCD(10, 1) = %d \n", GCD(10, 1));
    printf("GCD(15, 100) = %d \n", GCD(15, 100));
    printf("GCD(201, 27) = %d \n", GCD(201, 27));    

    return 0;
}


