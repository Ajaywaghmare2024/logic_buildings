//3. Accept two numbers in variables x and y from the user and perform the following operations
//Actions :
//1.Equality Check if x is equal to y
//2.Less Than Check if x is less than y
//3.Quotient and Remainder Divide x by y and display the quotient and remainder
//4. Range : Accept a number and check if it lies between x and y (both inclusive)
//5. Swap : Interchange x and y

#include<iostream>
using namespace std;

 int main(){	
	int x,y,i,quo,rem,n,k;
	
    cout<<"Enter two numbers : "<<endl;
    cin>>x>>y;
    
    cout<<"Choose any option:"<<endl;
    cout<<endl<<"1: Equality "<<endl;
    cout<<"2: to check x is less than y or not "<<endl;
    cout<<"3: to divide x by y & to display quotient & remainder "<<endl;
    cout<<"4: to check Range "<<endl;
    cout<<"5: Swap "<<endl;
    cin>>i;
    
    switch(i)
    {
         case 1:
             if(x==y)
                 cout<<"x is equal to y";
             else
                cout<<"x is not equal to y";
             break;
         case 2:
             if(x<y)
                cout<<"x is less than y";
             else
                cout<<"x is not less than y";
             break;
         case 3:
             quo=x/y;
             rem=x%y;
             cout<<"Quotiont of "<<x<<" / "<<y<<" is : "<<quo<<endl;
			 cout<<"Remainder of "<<x<<" / "<<y<<" is : "<<rem<<endl;
             break; 
		case 4:
             cout<<"Enter a number : ";
             cin>>n;             
             if(n>=x && n<=y)
                 cout<<n<<" lies in between "<<x<<" & "<<y;
             else
             	cout<<n<<" does not lies in between "<<x<<" & "<<y;
             	break;
         case 5:
             cout<<"before swap x="<<x<<" & y="<<y<<endl;
             k=x;
             x=y;
             y=k;
             cout<<"After swap x="<<x<<" & y="<<y<<endl;
             break;
		default:
             cout("Please choose correct option");        
         }
    return 0;
}
