//5. Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;

int main(){
  	float a1, a2, a3;
  
  	cout<<"Enter 1st angle : "<<endl;
  	cin>>a1;
	cout<<"Enter 2nd angle : "<<endl;
	cin>>a2;
	cout<<"Enter 3rd angle : "<<endl;
	cin>>a3;
  
  	if( (a1+a2+a3)==180 )
  		cout<<"It is a valid triangle"<<endl;
	else
		cout<<"It is not a valid triangle";
			
	return 0;
}
