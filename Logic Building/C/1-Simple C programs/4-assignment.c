//4. Accept the basic salary of an employee and compute the net salary after adding earnings and subtracting deductions.
//PF is 2 % of basic
//Tax is 3 % of basic
//HRA is 5 % basic
//DA is 8 % of basic

#include <stdio.h>

int main(){
	int basic;
	float pf, tax, hra, da, earnings ;
	
	printf("Enter the basic sallary of an Employee : ");
	scanf("%d", &basic);
	
	pf = 2*basic/100;
	tax = 3*basic/100;
	hra = 5*basic/100;
	da = 8*basic/100;
	
	earnings = (basic+pf+hra+da)-tax;
	printf("Total earnings = %f ", earnings);
	
	return 0 ;
}
