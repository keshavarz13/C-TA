/**____________________________________________
 * Learning Sort
 * 
 * Bubble sort
 * Binary sort
 ____________________________________________*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void array_swap(int a[], int i, int j){
	int tmp;
	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

void bubble_sort(int a[], int size){
	int i, j;
	for(i = 0; i < size - 1; i++)
		for(j = i + 1; j < size; j++)
			if(a[i] > a[j])
				array_swap(a, i, j);
}

int binary_search(int start, int end, int a[], int value){
	int mid = (start + end) / 2;
	if(a[mid] == value)
		return mid;
	else if(start >= end)
		return -1;
	else if(value > a[mid])
		return binary_search(mid + 1, end, a, value);
	else
		return binary_search(start, mid - 1 , a, value);
}



int main () { 
    int n, search_input; 
    printf("Enter number of inputs: ");
    scanf("%d" , &n); 
    int numbers[n]; 
    int i = 0 ;
    for (i = 0 ; i < n ; i++){
        printf("Enter number%d: " , i);
        scanf("%d" , &numbers[i]);
    }
    bubble_sort(numbers , n); 
    printf("Enter number of inputs: ");
    scanf("%d" , &search_input ); 
    if(binary_search(0, n-1, numbers, search_input) != -1){
        printf("finded!");
    }else
    {
        printf("not finded!");
    }
    return 0;
}