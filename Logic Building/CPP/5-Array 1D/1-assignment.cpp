//1. Write a program to accept n numbers in an array and display the largest and smallest number. Using
//these values, calculate the range of elements in the array.

#include <iostream>
using namespace std;

int main(){
	int a[50],i,n,large,small;
	
	cout<<"How many elements : ";
	cin>>n;
	cout<<"Enter the array"<<endl;
	
	for(i=0; i<n; ++i){
		cin>>a[i];
	}
 	large=small=a[0];
 	
 	for(i=1; i<n; ++i){
	 	if(a[i] > large)
			large=a[i];
		if(a[i] < small)
			small=a[i];
	}
	cout<<"The largest element is : "<<large<<endl;
	cout<<"The smallest element is : "<<small;
 
	return 0;
}

