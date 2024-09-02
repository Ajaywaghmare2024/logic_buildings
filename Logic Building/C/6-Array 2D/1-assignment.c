//1. Write a program to accept, display and print the sum of elements of each row
// and sum of elements of each column of a matrix.

#include <stdio.h>

int main(){
	int row_size, col_size;
	
	printf("Enter the number of rows : ");
	scanf("%d", &row_size);
	printf("Enter the number of column : ");
	scanf("%d", &col_size);
	
	int arr[row_size][col_size];
	int row_sum[row_size], col_sum[col_size], sum=0,i,j;
	
	//Read user input to store into matrix
	for(i=0; i<row_size; i++){
		for(j=0; j<col_size; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	//	Display matrix
	printf("Matrix :\n");
	for(i=0; i<row_size; i++){
		for(j=0; j<col_size; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//	calculating sum of each row and store to an array "row_sum[5]"
	for(i=0; i<row_size; i++){
		for(j=0; j<2; j++){
			//row sum
			sum += arr[i][j];		
		}
		row_sum[i] = sum;
		sum=0;
	}
	
	// calculating sum of each column and store to an array col_sum[5]"
	for(i=0; i<row_size; i++){
		for(j=0; j<col_size+1; j++){
			//column sum
			sum += arr[j][i];
		}		
		col_sum[i] = sum;
		sum=0;	
	}

	
	//	display sum of each row
	for(i=0; i<row_size; i++){
		printf("sum of Row %d = %d \n", i+1, row_sum[i] );
	}
	printf("\n");
	for(i=0; i<col_size; i++){
		printf("sum of Column %d = %d \n", i+1, col_sum[i] );
	}
	
	return 0;
		
}
