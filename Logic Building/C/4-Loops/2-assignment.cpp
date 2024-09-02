//2. Write a program to accept two integers x and n and compute x raised to n.

#include <stdio.h>

int main()
{
    int x, i,ans=1; // base
 	int n ;  // power
 	
 	printf("Enter the base number : ");
 	scanf("%d", &x);
 	printf("Enter the power : ");
 	scanf("%d", &n);
 	

	for(i=1; i<=n; i++){
		ans *= x; 
	}
    printf("\n %d", ans);

    return 0;
}
