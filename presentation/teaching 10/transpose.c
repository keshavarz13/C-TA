#include <stdio.h>
#define SIZE 5

void swap(int a[SIZE][SIZE], int i, int j){
	int tmp;
	tmp = a[i][j];
	a[i][j] = a[j][i];
	a[j][i] = tmp;
}

void transpose(int nRows, int nCols, int a[nRows][nCols]){
	int i, j;
	for(i = 0; i < nCols; i++)
		for(j = i; j < nRows; j++)
			swap(a, i, j);
}

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]){
int row, column;
for ( row = 0; row < nRows; ++row) {
	for ( column = 0; column < nCols; ++column )
	printf ("%5i", matrix[row][column]);
	printf ("\n");
}
}

int main (void){
int sampleMatrix[5][5] =
{{ 7, 16, 55, 13, 12 }, { 12, 10, 52, 0, 7 }, { 12, 10, 52, 0, 7 }, { -2, 1, 2, 4, 9 }, { -2, 1, 2, 4, 9 }};
	printf ("Original matrix:\n");
	displayMatrix (5, 5, sampleMatrix);
    transpose(5, 5 , sampleMatrix);
	printf ("Transpose matrix:\n");
	displayMatrix (5, 5, sampleMatrix);

}