//3. Write a menu driven program to perform the following operations on strings using standard 
//library functions: Length, Copy, Concatenation, Compare, Reverse, Uppercase, Lowercase, Check case.

#include <stdio.h>
#include <string.h>

int main(){
	char str[50], cpy[50]= "World", rev[50], upper[50], lower[50];
	char ccat[] = "World";
	int n, ln, cmp;
	
	printf("Enter a string : ");
	gets(str);
	
	printf("Select the appropiate option :");
	printf("1. length \n");
	printf("2. Copy \n");
	printf("3. Concantination \n");
	printf("4.Compare \n");
	printf("5.Reverse \n");
	printf("6.Uppercase \n");
	printf("7.Lowercase \n");
	
	printf("\nPlease select the option :");
	scanf("%d", &n);
	
	switch(n){
		case 1: 
			ln = strlen(str);
			printf("String Length = %d ", ln);
			break;
		case 2:
			strcpy(str, cpy);
			printf("str copied to cpy = %s",cpy) ;
			break;
		case 3:
			strcat(str, ccat);
			printf("concantinated string = %s", str);
			break;
		case 4:
			cmp = strcmp(str, ccat);
			if(cmp == 0)
				printf("Two strings are equal");
			else 
				printf("Srings are not equal");
			break;
		case 5:
			printf("Reversed String: %s", strrev(str));
			break;
		case 6:
			printf("Uppercase ; %s", strupr(str));
			break;
		case 7:
			printf("lowercase : %s", strlwr(str));
			break;
		default:
			printf("Invalid option!, Please select appropiate option");
			
	}
}
