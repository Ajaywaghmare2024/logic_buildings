//7. Write a menu driven program to do following operations :
//a) Compute area of circle
//b) Compute area of rectangle
//c) Compute area of triangle
//d) Exit
//Display menu, ask choice to the user, depending on choice accept the parameters and perform the
//operation. Continue this process until user selects exit option.

#include <iostream>
using namespace std;

int main(){
	int n,r;
	float area;
	
	cout<<"options : "<<endl;
	cout<<"1. Compute area of circle"<<endl;
	cout<<"2. Compute area of rectangle"<<endl;
	cout<<"3. Compute area of triangle"<<endl;
	cout<<"4. exit"<<endl;
	
	cout<<endl<<"Please select option : ";
	cin>>n;
	
	while(n>0 && n<4){
		if(n==1){
			cout<<"Enter the radius : ";
			cin>>r;
			area = 3.14*r*r;
			cout<<"Area of circle = "<<area<<endl;			
		}
		if(n==2){
			int l,w;
			cout<<"Enter length : ";
			cin>>l;
			cout<<endl<<"Enter width : ";
			cin>>w;
			area = l * w;
			cout<<endl<<"Area of rectangle = "<<area<<endl;
		}
		if(n==3){
			int b,h;
			cout<<"Enter length of base : ";
			cin>>b;
			cout<<"Enter perpendicular height : ";
			cin>>h;
			area = (b*h)/2;
			cout<<endl<<"Area of triangle = "<<area;
		}
		
		cout<<endl<<"Please select option : ";
		cin>>n;
	}
	return 0;
}
