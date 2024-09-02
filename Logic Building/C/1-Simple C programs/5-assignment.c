//5. Accept two numbers and swap two numbers using
//i) Third variable
//ii) By performing arithmetic operations.

#include <stdio.h>

int main(){
	int a,b,temp;
	printf("Enter two numbers :\n");
	scanf("%d %d", &a, &b);
	
	printf("Swaping using third variable \n:");
	temp = a;
	a = b;
	b = temp;
	printf("a = %d and b = %d \n", a,b);
	
	printf("\n Swaping using arithmetic operations \n:");
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d and b = %d", a,b);
	
	return 0;
}
