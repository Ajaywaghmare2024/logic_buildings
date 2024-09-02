//1. Write a program that accepts numbers continuously as long as the number is positive and prints the
//sum of the given numbers.

#include <stdio.h>;

int main(){
	int n, sum=0;
	
	printf("Enter the negative and positive numbers : ");
	scanf("%d", &n);
	
	while(n<0){
		sum += n;
		scanf("%d", &n);
	}
	printf("Sum = %d", sum);
	return 0;
}
