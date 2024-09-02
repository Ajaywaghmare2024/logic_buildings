//1. Write a program to accept an integer and check if it is even or odd.

#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter an integer number : ";
	cin>>n;
	
	if(n%2==0)
		cout<<endl<<n<<" is an even number"<<endl;
	else
		cout<<n<<" is an odd number";
		
	return 0;
}
