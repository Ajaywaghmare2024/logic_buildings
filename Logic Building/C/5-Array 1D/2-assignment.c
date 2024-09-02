//2. Write a program to accept an array of n elements and a number say key. Check whether key is present
//in the array or not.

#include <stdio.h>

int main(){
	int n, key, arr[50],i, isPresent;
	
	printf("Enter a number of values you want to insert in an array : ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter element %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Enter the element you want to search into array : ");
	scanf("%d", &key);
	
	isPresent = 0;
	for(i=0; i<n; i++){
		if(arr[i]==key){
			isPresent = 1;			
		}
		if(isPresent == 1){
			printf("Element %d is present in an array at position %d ",key, i+1);
			break;	
		}
	}	
	if(isPresent == 0)
		printf("Element %d is not present in an array", key);
	return 0;
	
}
