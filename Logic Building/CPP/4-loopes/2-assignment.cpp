//Write a program to accept two integers x and n and compute x raised to n.

#include <iostream>
using namespace std;

int main(){
	int x,n,pow=1,j=1;
	
	cout<<"Enter two numbers : ";
	cin>>x>>n;
	pow = x;
	
	while(n!=j){
		pow = pow*x;
		j++;
	}
	cout<<"x raised to n = "<<pow;
	
	return 0;
}
