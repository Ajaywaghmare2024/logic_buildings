//1. Write a program which accepts a sentence from the user and alters it as follows: Every space is replaced by *, 
//case of all alphabets is reversed, digits are replaced by?

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char sentance[50];
	int i;
	
	printf("Enter a sentance : ");
	gets(sentance);
	
	printf("%s ", sentance);
	
	// To replace space by * in sentence
	for(i=0;i<=strlen(sentance)-1;i++){
	 	if(sentance[i]==' ')
	  		sentance[i]='*';
	}
	printf("\n\nReplacing space by *");
	printf("\n%s ", sentance);
	
	 // To change the case of alphabets in sentence
	 for(i=0;i<=strlen(sentance)-1;i++){
		if(islower(sentance[i]))
			sentance[i]=toupper(sentance[i]);
		else
		  sentance[i]=tolower(sentance[i]);
	}
	printf("\n\nChanging case of alphabet");	  
	printf("\n%s ", sentance);
	
	// To replace digits by ? in sentence
	for(i=0;i<=strlen(sentance)-1;i++){
		if(isdigit(sentance[i]))
			sentance[i]='?';
	}
	printf("Replacing digit by ?");
	printf("\n\n%s ", sentance);
	
	return 0;
}
