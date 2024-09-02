//7. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C + 273.15)

#include<iostream>
using namespace std;

int main(){
	float fahrenheit, celsius, kelvin;
	
	cout<<"Enter the temperature in fahrenheit : "<<endl;
	cin>>fahrenheit;
	
	celsius = 5/9*(fahrenheit-32);
	kelvin = celsius + 273.15;
	cout<<fahrenheit<<" F = "<<celsius<<" deg C"<<endl;
	cout<<fahrenheit<<" F = "<<kelvin<<" K";
	return 0;
}
