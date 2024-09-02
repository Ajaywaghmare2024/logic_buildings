//5. Write a program having menu that has three options - add, subtract or multiply two fractions. The two
//fractions and the options are taken as input and the result is displayed as output. Each fraction is read as
//two integers, numerator and denominator.

#include <stdio.h>

int main(){
	int x,y,p,q, i;
	float add,sub,mul;
	
	printf("Enter the 1st fraction : \n");
	printf("Numerator :  ");
	scanf("%d", &x)	;
	printf("Denominator : ");
	scanf("%d",&y);
	
	printf("\n Enter the 2nd fraction : \n");
	printf("Numerator :  ");
	scanf("%d", &p)	;
	printf("Denominator : ");
	scanf("%d",&q);	
	
	printf("\n Choose any option : \n");
	printf("1. Add fractions \n");
	printf("2. Subtract fractions \n");
	printf("3. Multiply fractions");
	
	printf("\n Enter your option : ");
	scanf("%d", &i);
	
	switch(i){
		case 1:
			add = (x/y)+(p/q);
			printf("Addition = %f ", add);
			break;
		case 2: 
			sub = (x/y)-(p/q);
			printf("Subtraction = %f ", sub);
			break;
		case 3:
			mul = (x/y)*(p/q);
			printf("Multiplication = %f ", mul);
			break;
		default:
			printf("Please enter appropriate option");
	}
	return 0;
	
}
