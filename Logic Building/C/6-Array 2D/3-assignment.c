//3. Write a program to add and multiply two matrices. Perform necessary checks before adding and multiplying the matrices.

#include <stdio.h>  
	int main() {  
	   int m, n, i, j, k;  
	   printf("Enter the number of rows and columns of the matrices: ");  
	   scanf("%d%d", &m, &n);  
	   int a[m][n], b[m][n], c[m][n], mul[10][10];  
	   printf("Enter the elements of matrix A: \n");  
	   for (i = 0; i < m; i++) {  
	      for (j = 0; j < n; j++) {  
	         scanf("%d", &a[i][j]);  
	      }  
	   }  
	   printf("Enter the elements of matrix B: \n");  
	   for (i = 0; i < m; i++) {  
	      for (j = 0; j < n; j++) {  
	         scanf("%d", &b[i][j]);  
	      }  
	   }  
	   // add the matrices  
	   for (i = 0; i < m; i++) {  
	      for (j = 0; j < n; j++) {  
	         c[i][j] = a[i][j] + b[i][j];  
	      }  
	   }  
	   // print the result  
	   printf("The sum of the two matrices is: \n");  
	   for (i = 0; i < m; i++) {  
	      for (j = 0; j < n; j++) {  
	         printf("%d ", c[i][j]);  
	      }  
	      printf("\n");  
	   }  
	   
	   //Multiplication of matrix
	   printf("multiply of the matrix=\n");    
		for(i=0;i<m;i++){    
			for(j=0;j<n;j++){    
				mul[i][j]=0;    
				for(k=0;k<n;k++){    
					mul[i][j]+=a[i][k]*b[k][j];    
				}    
			}    
		}    
		//for printing result    
		for(i=0;i<m;i++){    
			for(j=0;j<n;j++){    
				printf("%d\t",mul[i][j]);    
			}    
		printf("\n");    
		}    
		return 0;  
}  
