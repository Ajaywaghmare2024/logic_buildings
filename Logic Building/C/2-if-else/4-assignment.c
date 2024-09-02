//4. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
//(Hint: a, e, i, o, u are vowels)

#include <stdio.h>

int main(){
	char VorC;
	
	printf("Enter the character : ");
	scanf("%c", &VorC);
	
	if(VorC=='a' || VorC=='A' || VorC=='e' || VorC=='E' || VorC=='i' || VorC=='I' || VorC=='o' || VorC=='O' || VorC=='u' || VorC=='U'){
		printf("%c is a vowel", VorC);
	}
	else
		printf("%c is not a vowel",VorC);
		
	return 0;
}
