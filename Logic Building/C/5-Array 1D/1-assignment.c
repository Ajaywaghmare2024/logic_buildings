//1. Write a program to accept n numbers in an array and display the largest and smallest number. Using
//these values, calculate the range of elements in the array.

#include <stdio.h>

int main(){
	int n, i, arr[50], largest, smallest ;
	
	printf("Enter a number of values you want to insert in an array : ");
	scanf("%d", &n);
	
	
	for(i=0; i<n; i++){
		printf("Enter element %d : ", i+1);
		scanf("%d", &arr[i]);
	}		
		
	largest = arr[0];
	smallest = arr[0];
	
	for(i=1; i<n; i++){
		if(arr[i] > largest)
			largest=arr[i];
		if(arr[i] < smallest)
			smallest=arr[i];
	}
	printf("The largest element is %d",largest);
	printf("\nThe smallest element is %d",smallest);
	 
	return 0;
}
