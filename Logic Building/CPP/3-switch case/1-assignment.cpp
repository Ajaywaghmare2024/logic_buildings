//1. Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a single digit number : ";
	cin>>n;
	if(n>9)
		cout<<"Number should be a single digit ";
	else{
		switch(n){
			case 0: 
			cout<<n<<" => zero"<<endl;
			break;
			case 1: 
			cout<<n<<" => one"<<endl;
			break;
			case 2: 
			cout<<n<<" => Two"<<endl;
			break;
			case 3: cout<<n<<" => Three"<<endl;
			break;
			case 4: 
			cout<<n<<" => Four"<<endl;
			break;
			case 5: 
			cout<<n<<" => Five"<<endl;
			break;
			case 6: 
			cout<<n<<" => Six"<<endl;
			break;
			case 7: 
			cout<<n<<" => Seven"<<endl;
			break;
			case 8: 
			cout<<n<<" => Eight"<<endl;
			break;
			case 9: 
			cout<<n<<" => Nine"<<endl;
			break;			
		}
	}
	
	return 0;
}
