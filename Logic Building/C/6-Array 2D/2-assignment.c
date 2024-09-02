//2. Write a program to accept a matrix A of size mXn and store its transpose in matrix B. Display matrix B.

#include <stdio.h>

int main(){
	int row_size, col_size;
	
	printf("Enter the number of rows : ");
	scanf("%d", &row_size);
	printf("Enter the number of column : ");
	scanf("%d", &col_size);
	
	int mat[row_size][col_size], mat_trans[col_size][row_size],i,j;
	
	//Read user input to store into matrix mat1[][]
	for(i=0; i<row_size; i++){
		for(j=0; j<col_size; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	//Display matrix
	printf("Matrix :\n");
	for(i=0; i<row_size; i++){
		for(j=0; j<col_size; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//computing Transpose of a matrix
	for(i=0; i<row_size; i++){
		for(j=0; j<col_size; j++){
			mat_trans[j][i] = mat[i][j];
		}
	}
	//Display transpose of a matrix
	for (i = 0; i < col_size; i++){
  		for (j = 0; j < row_size; j++) {
		    printf("%d  ", mat_trans[i][j]);
		    if (j == row_size - 1)
    			printf("\n");
  		}
  	}
	return 0;
}
