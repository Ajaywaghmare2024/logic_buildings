//4. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
//(Hint: a, e, i, o, u are vowels)

#include<iostream>
using namespace std;

int main(){
	char VorC;
	
	cout<<"Enter the character : ";
	cin>>VorC;
	
	if(VorC=='a' || VorC=='A' || VorC=='e' || VorC=='E' || VorC=='i' || VorC=='I' || VorC=='o' || VorC=='O' || VorC=='u' || VorC=='U'){
		cout<<VorC<<" is a vowel"<<endl;
	}
	else
		cout<<VorC<<" is not vowel";
		
	return 0;
}
