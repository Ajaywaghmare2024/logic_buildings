#include <iostream>
using namespace std;
int main()
{
    /*int n;
    cout << "Enter the num" << endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the elemnts in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //diplay
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   int large=arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]>large){
        large=arr[i];
    }
   }
   cout<<"largest second elements is ="<<arr[n-2]<<" ";
*/

    int size;
    cout << "Enter the size" << endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<=size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //find dupliactes 
    cout<<"Dupliaate elements is="<<endl;
    for(int i=0;i<=size;i++){
        for(int j=i+1;j<=size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[j]<<" ";
            }
        }
    }

    return 0;
}