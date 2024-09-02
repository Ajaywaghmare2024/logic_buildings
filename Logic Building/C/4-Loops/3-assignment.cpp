//3. Write a program to accept a character, an integer n and display the next n characters.

#include <stdio.h>

int main(){
	char ch;
	int n, i;
	
	printf("Enter a character : ");
	scanf("%c", &ch);
	printf("\n Enter how many next character you want to print : ");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++){
		printf("%c", ch);
		ch += 1;
	}
	return 0;
}
