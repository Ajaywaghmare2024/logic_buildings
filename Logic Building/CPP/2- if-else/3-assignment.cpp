//3. Write a program, which accepts annual basic salary of an employee 
//and calculates and displays the Income tax as per the following rules.
//Basic: < 1,50,000 Tax = 0
//1,50,000 to 3,00,000 Tax = 20%
//> 3,00,000 Tax = 30%

#include<iostream>
using namespace std;

int main(){
	float basic, tax;
	cout<<"Enter the basic salary : "<<endl;
	cin>>basic;
	
	if(basic < 150000){
		cout<<"No tax applied for salary less than 150000";
	}
	if(basic > 150000 && basic < 300000 ){
		tax = 20*basic/100;
		cout<<endl<<"Tax = "<<tax;
	}
	if(basic > 300000){
		tax = 30*basic/100;
		cout<<endl<<"Tax = "<<tax;
	}
		
	return 0;
}
