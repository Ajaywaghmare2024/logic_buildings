//6. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2ðr 2 + 2ðrh, volume = ð r 2 h).
// Define a constant variable pi=3.14.

#include<iostream>
using namespace std;

#define pi 3.14

int main(){
	float area, volume, radius, height;
	
	cout<<"Enter the radius : ";
	cin>>radius;
	cout<<endl<<"Enter the height of cylender : ";
	cin>>height;
	
	area = (2*pi*radius*radius*height)+(2*pi*radius*radius*height);
	cout<<endl<<"Area of cylender = "<<area<<endl;
	
	volume = pi*radius*radius*height;
	cout<<"Volume of cylender = "<<volume;
	
	return 0;
}
