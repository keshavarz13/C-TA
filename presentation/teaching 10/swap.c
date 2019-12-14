// how to pass array to function 
/*________________________________________________
 * Array size should be passed from caller function to called function 

 * Using definitions 
 * Using input variable 
 * use sizeof
________________________________________________*/

//Point : C compiler does not check the range you access

#include <stdio.h>

void array_swap(int a[], int i, int j){
	int tmp;
	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

void main(void){
	int num[10] = {1, 2, 5, 6};
	int x = 2, y = 6;
	printf("num[%d] = %d, num[%d] = %d\n", x, num[x], y, num[y]); 
	array_swap(num, x, y);
	printf("num[%d] = %d, num[%d] = %d\n", x, num[x], y, num[y]);
}