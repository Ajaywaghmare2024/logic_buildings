//4. Write a program to calculate factorial of a number.
//For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120

#include <iostream>
using namespace std;

int main(){
	int n, fact=1, i;
	
	cout<<"Enter a number : ";
	cin>>n;
	
	for(i=1; i<=n; i++){
		fact = fact * i;
	}
	cout<<"Factorial of "<<n<<" = "<<fact;
	return 0;
}
