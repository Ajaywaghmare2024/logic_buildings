//4. Accept radius from the user and write a program having menu with the following options and corresponding actions:
// Actions :
//1. Area of Circle
//2. Circumference of Circle
//3. Volume of Sphere

#include<iostream>
using namespace std;

 int main(){
 	int r,n;
 	float area, circumference, volume;
 	
 	cout<<"Enter the radius : ";
 	cin>>r;
 	
 	cout<<endl<<"Choose any option : "<<endl;
    cout<<"1 : Area of circle "<<endl;
    cout<<"2 : Circumference of Circle "<<endl;
    cout<<"3 : Volume of Sphere "<<endl;
    
    cout<<endl<<"Select the option : "<<endl;
    cin>>n;
    
    switch(n){
    	case 1 :
    		area = 3.14*r*r;
    		cout<<" Area of circle = "<<area<<endl;
    		break;
    	case 2:
    		circumference = 2*3.14*r;
    		cout<<"Circumference of Circle = "<<circumference<<endl;
    		break;
    	case 3:
    		volume = (4*3.14*r*r*r)/3;
    		cout<<"Volume of Sphere = "<<volume<<endl;
    		break;
    	default:
    		cout<<endl<<"please select appropriate option";
	}
    
 	return 0;
 }
 
 
 
 
 
 
