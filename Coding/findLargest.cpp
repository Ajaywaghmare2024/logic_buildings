#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the size of thr array"<<endl;
    cin>>number;
    int arr[number];
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<=number;i++){
        cin>>arr[i];
    }
    // display elements
    cout<<"the array elements is="<<endl;
     for(int i=0;i<=number;i++){
        cout<<arr[i]<< " ";
     }
     // find thr largest arry
     int largest=arr[0];
     for(int i=0;i<=number;i++){
        if(arr[i]>largest)
        largest=arr[i];
     }

     
     cout<<endl;
     cout<<"largest elemnts is="<<largest<<" "<<endl;

     cout<<"Second largest element is="<<arr[number-2];

     //find the minimum number
     int smallest=arr[0];
     for(int i=0;i<=number;i++){
        if(arr[i]<smallest)
        smallest=arr[i];
     }
     cout<<endl;
     cout<<"the min number of the array is="<<smallest<<endl;
     cout<<"the second smallest no is="<<arr[number+1];

}