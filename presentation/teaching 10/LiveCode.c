// // how to pass array to function 
// #include <stdio.h>

// void init_array(int arr[10]){
// 	int i;
// 	for(i = 0; i < 10; i++)
// 		arr[i] = i;
// }

// void main(void){
// 	int a[10];
// 	init_array(a);

// 	int j;
// 	for(j = 0; j < 10; j++)
// 		printf("a[%d] = %d\n", j, a[j]);
// }

/*________________________________________________
 * Array size should be passed from caller function to called function 

 * Using definitions 
 * Using input variable 
 * use sizeof
________________________________________________*/

//Point : C compiler does not check the range you access
// #include <stdio.h>

// void array_swap(int a[], int i, int j){
// 	int tmp;
// 	tmp = a[i];
// 	a[i] = a[j];
// 	a[j] = tmp;
// }

// void main(void){
// 	int num[10] = {1, 2, 5, 6};
// 	int x = 2, y = 6;
// 	printf("num[%d] = %d, num[%d] = %d\n", x, num[x], y, num[y]); 
// 	array_swap(num, x, y);
// 	printf("num[%d] = %d, num[%d] = %d\n", x, num[x], y, num[y]);
// }

/**____________________________________________
 * Learning Sort
 * 
 * Bubble sort
 * Binary sort
 ____________________________________________*/
// void bubble_sort(int a[], int size){
// 	int i, j;
// 	for(i = 0; i < size - 1; i++)
// 		for(j = i + 1; j < size; j++)
// 			if(a[i] < a[j])
// 				array_swap(a, i, j);
// }

// int bsearch(int start, int end, int a[], int value){
// 	int mid = (start + end) / 2;
// 	if(a[mid] == value)
// 		return mid;
// 	else if(start >= end)
// 		return -1;
// 	else if(value > a[mid])
// 		return bsearch(mid + 1, end, a, value);
// 	else
// 		return bsearch(start, mid - 1 , a, value);
// }

