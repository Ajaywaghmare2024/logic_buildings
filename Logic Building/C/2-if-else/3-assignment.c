//3. Write a program, which accepts annual basic salary of an employee and calculates and displays the Income tax as per the following rules.
//Basic: < 1, 50,000 Tax = 0
//1, 50,000 to 3,00,000 Tax = 20%
//> 3,00,000 Tax = 30%

#include <stdio.h>

int main(){
	float basic, tax;
	
	printf("Enter the basic salary : ");
	scanf("%f",&basic);
	
	if(basic <= 150000){
		tax = 0;
		printf("No tax applied for salary less than 150000");
	}
	else if(basic > 150000 && basic <= 300000 ){
		tax = basic*0.2;
		printf("Tax = %f ", tax);
	}
	else if(basic > 300000){
		tax = basic*0.3;
		printf("Tax = %f ", tax);
	}
	return 0;
		
}
