//5. Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>

int main(){
	int a1, a2, a3;	
	
	printf("Enter the three angles of a triangle : ");
	scanf("%d %d %d", &a1, &a2, &a3);
	
	if((a1+a2+a3)==180)
		printf("it is a valid triangle");
	else
		printf("it is not a valid triangle");
		
	return 0;
}
