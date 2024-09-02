//5. Write a program to accept a decimal number and convert it to binary.

#include <stdio.h>

int main(){
	int n,i,arr[10];
	
	printf("Enter a decimal number to convert to binary : ");
	scanf("%d", &n);
	
	for(i=0;n>0;i++){    
		arr[i]=n%2;    
		n=n/2;    
	}    
	printf("\nBinary of Given Number is=");    
	for(i=i-1;i>=0;i--){    
		printf("%d",arr[i]);    
	}    
	return 0;  
}
