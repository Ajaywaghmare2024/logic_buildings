//7. Write a C program to accept a character and invert the case of it.

#include<iostream>
using namespace std;

int main(){
	char x;
	cout<<"Enter the character : ";
	cin>>x;
	if(islower(x)){
		char ch = toupper(x);
		cout<<x<<" : uppercase = "<<ch<<endl;
	}
	else{
		char ch = tolower(x);
		cout<<x<<" : lowercase = "<<ch<<endl;
	}
		
}
