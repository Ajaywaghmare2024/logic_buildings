//4. Accept radius from the user and write a program having menu with the following options and
//corresponding actions:
//Actions:
//1. Area of Circle
//2. Circumference of Circle
//3. Volume of Sphere

#include <stdio.h>

int main(){
	int radius, i;
	float area, circumference, volume;
	
	printf("Enter the radius : ");
	scanf("%d", &radius);
	
	printf("\n Choose any option : \n");
	printf("1. Area of Circle \n");
	printf("2. Circumference of Circle \n");
	printf("3. Volume of Sphere \n");
	
	printf("\n Enter your option : ");
	scanf("%d", &i);
	
	switch(i){
		case 1:
			area = 3.14*radius*radius;
			printf("Area of circle = %f", area);
			break;
		case 2:
			circumference = 2*3.14*radius;
			printf("Circumference = %f", circumference);
			break;
		case 3:
			volume = (4*3.14*radius*radius*radius)/3;
			printf("Volume of a sphere = %f", volume);
			break;
	}
	return 0;
}
