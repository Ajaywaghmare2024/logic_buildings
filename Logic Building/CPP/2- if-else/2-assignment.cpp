//2. Write a program to accept a number and check if it is divisible by 5 and 7.

#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter an integer number : ";
	cin>>n;
	
	if(n%5==0 && n%7==0)
		cout<<n<<" is divisible by 5 and 7"<<endl;
	else
		cout<<n<<" is not divisible by 5 & 7";
		
	return 0;
}
