//3. Accept two numbers in variables x and y from the user and perform the following operations
//Actions:
//1.Equality Check if x is equal to y
//2.Less Than Check if x is less than y
//3.Quotient and Remainder Divide x by y and display the quotient and remainder
//4. Range : Accept a number and check if it lies between x and y (both inclusive)
//5. Swap : Interchange x and y

#include <stdio.h>

int main(){
	int x,y,i,quo,rem,n,k;
	
	printf("Enter two integer numbers : ");
	scanf("%d %d", &x, &y);
	
	printf("Choose any option : \n");
	printf("1: Equality \n");
	printf("2: to check x is less than y or not \n");
	printf("3: to divide x by y & to display quotient & remainder \n");
	printf("4: to check Range \n");
	printf("5: Swap \n");
	
	printf("\n Enter your option : ");
	scanf("%d", &i);
	
	switch(i){
		case 1:
			if(x==y)
				printf("x = y");
			else
				printf("x != y");
			break;
		case 2:
			if(x < y)
				printf("x < y");				
			else
				printf("x > y");
			break;
		case 3: 
			quo = x/y;
			rem = x%y;
			printf("Quotent = %d \n Remainder = %d ",quo, rem);
			break;
		case 4:
			printf("Enter a number : ");
			scanf("%d", &n);
			if(n>=x && n<=y)
				printf("%d lies between x and y", n);
			else
				printf("%d does not lies between x and y", n);
			break;
		case 5:
			printf("before swap x=%d and y=%d", x,y);
			k=x;
            x=y;
            y=k;
			printf("After swap x=%d and y=%d", x,y);
			break;
		default:
			printf("Please choose correct option");
	}	
	return 0;
}
