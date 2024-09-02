//2. Write a program that accepts n strings and displays the longest string. Use array of strings.

#include<stdio.h>
#include<string.h>
#define size 100 
#define wsize 20

//function prototype
void Longest_Word(char str[][20], int );

int main(){
	char str[size][wsize];
	int i,count=0, n;
	
	printf("\n How many words to accept:- ");
	scanf("%d",&n);
	
	printf("\n Enter %d words:- \n \n",n);
	for(i=0; i<n; i++)
		scanf("%s",str[i]);
	
	//calling function by passing array and number of words
	Longest_Word(str,n);
}

//function to find longest word
void Longest_Word(char str[][20], int n){
	int i, max, len, c;
	max=strlen(str[0]);
	
	for(i=1;i<n;i++){
		len=strlen(str[i]);
		if(len>max)
		{
			c=i;
			max=len;
		}
	}
	printf("\n The longest string among all is \"%s\" \n \n",str[c]);
}
