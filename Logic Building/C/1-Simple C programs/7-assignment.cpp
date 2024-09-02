//7. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C + 273.15)

#include <stdio.h>

int main(){
	float fahrenheit, celsius, kelvin;
	
	printf("Enter the temperature in fahrenheit : ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit-32)*5/9;
	kelvin = celsius + 273.15;
	printf("%f fahrenheit = %d celsius \n", fahrenheit, celsius);
	printf("%f fahrenheit = %d Kelvin ", fahrenheit, kelvin);
	
	return 0;
}
