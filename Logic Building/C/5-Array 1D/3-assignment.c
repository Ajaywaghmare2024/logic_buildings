//3. Write a program to accept an integer array and an integer say num and counts the occurrences of the
//num in the array.

#include <stdio.h>

int main(){
	int arr[50], num, n, count=0,i;
	
	printf("Enter a number of values you want to insert in an array : ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter element %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Enter the element you want to check its occurance in an array : ");
	scanf("%d", &num);
	
	for(i=0; i<n; i++){
		if(arr[i]==num){
			count++;
		}
	}
	printf("%d occurs %d times in an array", num, count);
	return 0;
}
