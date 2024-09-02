//8. Write a program to accept 3 numbers and compute minimum and maximum from them.

#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	
	cout<<"Enter 3 integer numbers :"<<endl;
	cin>>a>>b>>c;
	
	if(a>b && a>c)
		cout<<a<<" is the maximum number"<<endl;
	if(b>a && b>c)
		cout<<b<<" is the maximum number"<<endl;
	else
		cout<<c<<" is the maximum number"<<endl;
		
	if(a<b && a<c)
		cout<<a<<" is the minimum number"<<endl;
	if(b<a && b<c)
		cout<<b<<" is the minimum number"<<endl;
	else
		cout<<c<<" is the minimum number"<<endl;
		
	return 0;
}
