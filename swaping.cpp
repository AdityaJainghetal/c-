//write a program to swap the value of two varible with eash other?
#include <iostream>
using namespace std;

int main(){
	int n1,n2,temp;
	cout<<"Enter your two number: ";
	cin>>n1>>n2;
	cout<<"Before swapping number1:"<<n1<<"number 2: "<<n2<<endl;
	temp=n1; //temp=12
	n1=n2;  //n2=4
	n2=temp; //using 3 variable
	
	cout<<"After  swapping number1 :"<<n1<<"number 2: "<<n2<<endl;
}
