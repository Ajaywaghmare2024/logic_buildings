//3. Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the percentage also.

#include  <iostream> 
using namespace std;

int main() {
	int marks[5];
	int marksObtained = 0;
	float persentage;
	
	cout<<"Enter the marks for 5 subjects : "<<endl;
	for (int i=0; i<=5; i++ ){
		cin>>marks[i];
	}
	for (int i=0; i<=5; i++ ){
		marksObtained += marks[i];
	}	
	cout<<"Marks obtained = "<<marksObtained<<endl;
	
	persentage = (marksObtained *100) / 500.0;
	cout<<endl<<"Persentage = "<<persentage;
}
