#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    int rem=0,sum=0;
    temp=n;

    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    
    if(sum==temp){
        cout<<"is ams="<<sum;
    }
    else{
        cout<<"is not ams"<<sum;
    }
    return 0;
}