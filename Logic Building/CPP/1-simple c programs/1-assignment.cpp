// 1. Accept the radius from user and compute the area and circumference of a circle.

#include <iostream> 
using namespace std;

int main(){
	int radius;
	float area, circumference;
	
	cout<<"Enter the radius : ";
	cin>>radius;

	area = 3.14 * radius * radius;
	cout<<endl<< "Area of circle = "<<area<<endl;
	circumference = 2 * 3.14 * radius;
	cout<<"Circumference of circle = "<<circumference<<endl;
	
	return 0;
		
}
