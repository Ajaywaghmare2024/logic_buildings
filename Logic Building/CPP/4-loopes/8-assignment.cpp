//8. Write a program to print all prime numbers between 1 to n.

#include <iostream>
using namespace std;

int main(){
	int num,i,count,n;
	
	cout<<"Enter the max range : ";
	cin>>n;
	
	for(num = 1;num<=n;num++){
         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             cout<<num<<" ";
    }
    return 0;
}
