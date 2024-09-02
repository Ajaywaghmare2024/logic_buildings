#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    int temp=number;
    int remNum=0,revNum=0;

    while(number>0){
        remNum=number % 10;
        revNum=revNum*10 +remNum;
        number/=10;
    }
    if(temp== revNum){
        cout<<"it is palindrome num="<<revNum;
    }
    else{
        cout<<"it is  not palindrome num ="<<revNum;
    }

}