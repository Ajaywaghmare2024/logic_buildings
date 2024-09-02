//7. Write a menu driven program to do following operations :
//a) Compute area of circle
//b) Compute area of rectangle
//c) Compute area of triangle
//d) Exit
//Display menu, ask choice to the user, depending on choice accept the parameters and perform the
//operation. Continue this process until user selects exit option.

#include <stdio.h>

int main(){
	int radius, ln,wd, height,base, i;
	float area;
	
	printf("Please select the option : \n");
	printf("1. Area of circle \n");
	printf("2. Area of rectangle \n");
	printf("3. Area of triangle \n ");
	printf("4. Exit \n");
	
	printf("\n Please select the option : ");
	scanf("%d", &i);
	
	while(i!=4){
		if(i==1){
			printf("Enter radius : ");
			scanf("%d", &radius);
			area = 3.14*radius*radius;
			printf("Area of circle = %f", area);
		}
		if(i==2){
			printf("Enter lenght and width : ");
			scanf("%d %d", &ln, &wd);
			area = ln * wd;
			printf("Area of Rectangle = %f", area);
		}
		if(i==3){
			printf("Enter perpendicular height from base : ");
			scanf("%d", &height);
			printf("\n Enter base length : ");
			scanf("%d", &base);
			area = (height * base)/2;
			printf("Area of Triangle = %f", area);
		}
		if(i==4)
			break;
		printf("\n \n Please select the option : ");
		scanf("%d", &i);
	}
	return 0;
}
