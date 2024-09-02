//2. Write a program to accept an array of n elements and a number say key. Check whether key is present
//in the array or not.

#include <iostream>
using namespace std;

int main(){
	int n, key;
	cout<<"Enter how many elements you want to store to an array : ";
	cin>>n;
	
	int arr[n];
	for(int i=0; i<=n; i++){
		cin>>arr[i];
	}
	cout<<endl<<"Enter the element to search : "<<endl;
	cin>>key;
	
	for(i=0; i<=n; i++){
		if(arr[i]==key){
			cout<<endl<<key<<" is present in an array";
		}
	}
	
	return 0;
}
