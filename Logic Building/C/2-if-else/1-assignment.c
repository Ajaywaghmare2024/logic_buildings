//1. Write a program to accept an integer and check if it is even or odd.

#include <stdio.h>

int main(){
	int n;
	
	printf("Enter the integer number : ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("%d is an even number", n);
	}
	else{
		printf("%d is an odd number",n);
	}
}
