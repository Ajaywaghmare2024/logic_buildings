#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
   cout<<"The divisors of the number is="<<endl;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" ";
        }
    }
}