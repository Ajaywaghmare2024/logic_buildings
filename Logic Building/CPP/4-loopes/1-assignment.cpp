//1. Write a program that accepts numbers continuously as long as the number is positive and prints the
//sum of the given numbers.

#include <iostream>
using namespace std;

int main(){
	int num, sum=0 ;
	
	cout<<"Enter the positive and negative numbers";
	cin>>num;
	
	while(num < 0){
		sum += num;
		cin>>num;
	}
	cout<<"Sum = "<<sum;
	
	return 0;
}
