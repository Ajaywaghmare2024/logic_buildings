#include<stdio.h>
int fib(int); // Function declaration
int main()
{
	int n; // Declaration of variable
	printf("enter nth term :");
	scanf("%d",&n);
	printf("The %d term in the fibnacci series is: %d ",n,fib(n)); // Calling function
}
int fib(int n) // Function declaration
{
	if(n==0)
	{
		return 0;
	}
	if(n==1||n==2)
	{
		return 1;
	}
	return fib(n-1)+fib(n-2); // Recursive function
}

// #include <stdio.h>
// int fib(int n)
// {
//     int a = 0, b = 1, c, i;
//     if (n == 0)
//         return a;
//     for (i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }
 
// int main()
// {
//     int n = 9;
//     printf("%d", fib(n));
//     getchar();
//     return 0;
// }