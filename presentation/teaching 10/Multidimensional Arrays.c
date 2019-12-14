#include <stdio.h>
void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]){
int row, column;
for ( row = 0; row < nRows; ++row) {
	for ( column = 0; column < nCols; ++column )
	printf ("%5i", matrix[row][column]);
	printf ("\n");
}
}

int main (void){
int sampleMatrix[3][5] =
{{ 7, 16, 55, 13, 12 }, { 12, 10, 52, 0, 7 }, { -2, 1, 2, 4, 9 }};
	printf ("Original matrix:\n");
	displayMatrix (3, 5, sampleMatrix);
}
