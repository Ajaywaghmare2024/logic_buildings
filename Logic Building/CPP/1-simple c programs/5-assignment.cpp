//5. Accept two numbers and swap two numbers using
//i) Third variable
//ii) By performing arithmetic operations.

#include  <iostream> 
using namespace std;

int main(){
	int a=2,b=3,c;
	
	//	swaping using two variables
	cout<<"swaping using two variables :"<<endl;
	cout<<"before swaping : \t"<<"a = "<<a<<" and b = "<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"After swaping : \t"<<"a = "<<a<<" and b = "<<b<<endl;
	
	//	Swaping using arathmetic operations
	cout<<endl<<"Swaping using arathmetic operations :"<<endl;
	cout<<"before swaping : \t"<<"a = "<<a<<" and b = "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swaping : \t"<<"a = "<<a<<" and b = "<<b<<endl;
	
	return 0;
}
