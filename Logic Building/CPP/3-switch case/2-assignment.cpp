//2. Write a program, which accepts two integers and an operator as a character (+ - * / ), 
//performs the corresponding operation and displays the result.

#include<iostream>
using namespace std;

int main(){
	int a,b,res;
	char op;
	
	cout<<"Enter any one operand (+ - * /) : ";
	cin>>op;
	cout<<endl<<"Enter two integers : "<<endl;
	cin>>a>>b;
	
	switch(op){
		case '+' :
			res = a+b;
			cout<<a<<"+"<<b<<" = "<<res;
			break;
		case '-' :
			res = a - b;
			cout<<a<<"-"<<b<<" = "<<res;
			break;
		case '*' :
			res = a * b;
			cout<<a<<"*"<<b<<" = "<<res;
			break;
		case '/' :
			res = a / b;
			cout<<a<<"/"<<b<<" = "<<res;
			break;
	}
	return 0 ;
}
