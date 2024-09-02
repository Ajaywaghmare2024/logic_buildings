//8. Write a program to accept 3 numbers and compute minimum and maximum from them.

#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("Enter 3 numbers : ");
	scanf("%d %d %d", &a,&b,&c);
	
	if(a>b && a>c)
		printf("%d is maximum number",a);
	if(b>a && b>c)
		printf("%d is maximum number", b);
	if(c>a && c>b)
		printf("%d is maximum number", c);
	
	return 0;
}
