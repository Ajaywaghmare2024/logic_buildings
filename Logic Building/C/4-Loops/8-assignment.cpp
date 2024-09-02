//8. Write a program to print all prime numbers between 1 to n.

#include <stdio.h>

int main(){
	int n, num, i, count;
	
	printf("Enter the number upto which you want to print the prime numbers : ");
	scanf("%d", &n);
	
	for(num = 1;num<=n;num++){
         count = 0;
         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
        if(count==0 && num!= 1)
             printf("%d ",num);
    }  	
   return 0;
}
