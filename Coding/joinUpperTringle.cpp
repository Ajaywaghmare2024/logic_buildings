#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  int space=2*(n-1);
   
    for(int i=1;i<=n;i++){
 // for thr numbers 
        for(int j=1;j<=i;j++){
            cout<<j;
        }
          
        //fot spaces 
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        

        // for numbers 
        for(int j=i;j>=1;j--){
            cout<<j;
        }
         cout<<endl;
         space-=2;

    }
   
}