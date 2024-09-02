//4. Accept the basic salary of an employee and compute the net salary after adding earnings and subtracting deductions.
//PF is 2 % of basic
//Tax is 3 % of basic
//HRA is 5 % basic
//DA is 8 % of basic

#include  <iostream> 
using namespace std;

int main() {
		int basic;
		float pf, tax, hra, da, earnings ;
		
		cout<<"Enter the basic sallary of an Employee : ";
		cin>> basic;
		
		pf = 2*basic/100;
		tax = 3*basic/100;
		hra = 5*basic/100;
		da = 8*basic/100;
		
		earnings = (basic+pf+hra+da)-tax;
		cout<<endl<<"Total Earnings = "<<earnings<<endl;
		
		return 0;
}
