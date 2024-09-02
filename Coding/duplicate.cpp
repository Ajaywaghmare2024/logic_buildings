#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the num"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Entr the elements in arry"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // display array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // find  duplicate in array
    cout<<"Duplicate from the array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[j]<<" ";
            }
        }
    }

}