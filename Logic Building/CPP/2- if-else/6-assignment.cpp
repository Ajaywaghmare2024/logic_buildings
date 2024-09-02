//6. Write a C program to check whether a entered character is uppercase or lowercase alphabet.

#include<iostream>
#include <cctype>
using namespace std;

int main(){
	char x;
	cout<<"Enter the character : ";
	cin>>x;
	if(islower(x))
		cout<<x<<" is a lowercase character"<<endl;
	else
		cout<<x<<" is a uppercase character"<<endl;
	return 0;
}
