//3. Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the percentage also.

#include <stdio.h>

int main(){
	int a,b,c,d,e, sum;
	float per;
	
	printf("Enter the marks of a 5 subject out of 100 : \n ");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	
	sum = a+b+c+d+e;
	per = (sum*100)/500;
	printf("Total marks = %d \n", sum);
	printf("Persentage = %f", per);
	
	return 0;
}
