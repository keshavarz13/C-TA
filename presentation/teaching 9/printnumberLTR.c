#include <stdio.h>

void print_digit_left_right(int n){
    if(n >= 10)
         print_digit_left_right(n / 10);
         
    int digit = n % 10;
    printf("%d  ", digit);
}

int main(void){
    
    printf("\n print_digit_left_right(123): ");
    print_digit_left_right(123);
                  
    printf("\n print_digit_left_right(1000): ");
    print_digit_left_right (1000);
	return 0;
}



