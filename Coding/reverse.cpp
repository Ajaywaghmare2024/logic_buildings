#include<iostream>
using namespace std;
int main(){
    int n=123;
    int rev=0,rem=0,num;
    while(n>0){
        rem=n %10;
        rev = rev* 10+rem;
        n=n/10;

    }
    cout<<" rev no="<<rev;
}
// int main(){
//     int n=1745652;
//     int rem=0,rev=0;
//     while(n>0){
//        rem=n%10;
//        rev=rev*10+rem;
//        n/=10; 
//     }
//     cout<<"revNo="<<rev;
// }