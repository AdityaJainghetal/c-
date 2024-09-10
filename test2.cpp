#include <iostream>
using namespace std;

int main(){
	int num1,num2,temp;
	cout<<"Enter your two number:";
	cin>>num1>>num2;
	
	cout<<"Before swaping of the num1 and num2: "<<num1<<"num2: "<<num2;
	temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"After swaping of the num1  and num2: "<<num1<<"num2: "<<num2;
	
}
