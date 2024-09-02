//4. Write a program to perform the following operations on a square matrix. Write
//i) Check if the matrix is symmetric.
//ii) Display the trace of the matrix (sum of diagonal elements).
//iii) Check if the matrix is an upper triangular matrix.

#include <stdio.h>

int m,n;
	

int main(){
	int i,j, count=0, sum=0, isUpper=1;
	printf("Enter the square matrix of order mxn :\n");
	printf("Enter the row size : ");
	scanf("%d", &m);
	printf("Enter the column size :");
	scanf("%d", &n);
	 
	int mat[m][n], mat_trans[m][n];
	
	if(m==n){
		//Read the matrix
		printf("\n Enter the matrix : ");
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				scanf("%d", &mat[i][j]);
			}
		}
	
		//Display matrix
		printf("Matrix :\n");
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				printf("%d \t", mat[i][j]);
			}
			printf("\n");
		}
		//computing Transpose of a matrix
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				mat_trans[j][i] = mat[i][j];
			}
		}
		//Display matrix
		printf("Transpose Matrix :\n");
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				printf("%d \t", mat_trans[i][j]);
			}
			printf("\n");
		}
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				if(mat[i][j] != mat_trans[i][j])
					count++;
					break;
			}
		}
		if(count == 0)
			printf("\n The matrix is a symmetric matrix ");
		else
			printf("\n matrix is not a symmetric matrix");
		
		
	
		//calculating the diagonal sum
		for(i=0; i<m; i++){
			sum = sum + mat[i][i];
		}
		printf("\n The trace of a matrix = %d ", sum);
		
//		----------------------------------------------------
		for (i = 1; i < n; i++){
        	for (j = 0; j < i; j++){
            	if (mat[i][j] != 0)
            		isUpper = 0;
            		printf("\n it is not upper triangular matrix");
			}
		}
		if(isUpper == 1)
			printf("\n it is upper triangular matrix");			
	
	}else
		printf("\n Matrix is not a square matrix");
			
	return 0;	
}

