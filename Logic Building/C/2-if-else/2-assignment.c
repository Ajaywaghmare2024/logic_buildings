//2. Write a program to accept a number and check if it is divisible by 5 and 7.

#include <stdio.h>

int main(){
	int n;
	
	printf("Enter the integer number : ");
	scanf("%d", &n);
	
	if(n%5==0 && n%7==0)
		printf(" %d is divisible by 5 and 7 \n", n);
	else
	printf("%d is not divisible by 5 and 7", n);
	
	return 0;
}
