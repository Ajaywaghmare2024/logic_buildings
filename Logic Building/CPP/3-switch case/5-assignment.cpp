//5. Write a program having menu that has three options - add, subtract or multiply two fractions. The two
//fractions and the options are taken as input and the result is displayed as output. Each fraction is read as
//two integers, numerator and denominator.

#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,ch,nu,de;
	
	cout<<"enter 1 st fraction "<<endl;
	cout<<"numerator : ";
	cin>>a;
	cout<<"denominator : ";
	cin>>b;
    cout<<"enter 2nd fraction "<<endl;
	cout<<"numerator : ";
 	cin>>c;
 	cout<<"denominator : ";
 	cin>>d;
 	cout<<"1.add "<<endl;
	cout<<"2.sub"<<endl;
	cout<<"3.multiply : ";
 	cin>>ch;
 	
 	switch(ch){
 		case 1:
		 	nu=(a*d)+(c*b);
     		de=(b*d);
     		cout<<"add is "<<nu<<" "<<de;
     		break;
		case 2:
			nu=(a*d)-(c*b);
		    de=(b*d);
		    cout<<"sub is "<<nu<<" "<<de;
		    break;
		case 3:
			nu=(a*c);
		    de=(b*d);
		    cout<<"mul is "<<nu<<" "<<de;
		    break;
    }
	
	
//	float f1,f2, res;
//	int n;
//	char op;
//	
//	cout<<"Enter a two fractional number : ";
//	cin>>f1>>f2;
//	
//	cout<<"1 : Add "<<endl;
//	cout<<"2 : Subtract "<<endl;
//	cout<<"3 : Multiply "<<endl;
//	
//	cout<<"select the option :  ";
//	cin>>n;
//	
//	switch(n){
//		case 1:
//			res = f1 + f2;
//			cout<<f1<<" + "<<f2<<" = "<<res<<endl;
//			break;
//		case 2:
//			res = f1 - f2;
//			cout<<f1<<" - "<<f2<<" = "<<res<<endl;
//			break;
//		case 3 :
//			res = f1 * f2;
//			cout<<f1<<" X "<<f2<<" = "<<res<<endl;
//			break;
//	}
	return 0;
}
