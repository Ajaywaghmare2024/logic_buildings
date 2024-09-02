//1. WAP to accept an array of n integers and calculate sum of odd numbers and even numbers using the pointer to an array.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr = arr;
	
	//calculate size
//	int size = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n",size);
	
	int i =0;
	int sumEven = 0;
	int sumOdd = 0;
	while(i<size) {
		
		int curr = *(ptr++);
		
		if(curr%2 == 0) {
			sumEven+=curr;
		}
		else{
			sumOdd+=curr;
		}
		i++;
	}
	printf("%d\n",sumEven);
	printf("%d",sumOdd);
	return 0;
}
