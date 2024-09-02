//6. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2ðr 2 + 2ðrh, volume = ð r 2 h).
// Define a constant variable pi=3.14.

#include <stdio.h>
#define pi 3.14

int main(){
	float radius, height;
    float surface_area, volume;
    printf("Enter  value for  radius and height of a cylinder : \n");
    scanf("%f%f", &radius, &height);
	
	surface_area = (2*pi*radius*radius)+(2*pi*radius*height);
	printf("Surface area = %f ", surface_area);
	
	volume = pi*radius*radius*height;
	printf("\n Volume of cylender = %f", volume);
	
	return 0;
}
