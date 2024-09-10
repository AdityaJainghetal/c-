//write a program to find out the addition of three number?

#include <iostream>
using namespace std;

//global space,global variable, class, structure...
void add(int num1,int num2,int num3){
	cout<<"control goes to add()\n"; //formal
	cout<<"Addition"<<num1+num2+num3<<endl;
}

int main(){
	int number1,number2,number3;
	cout<<"enter 3 number : ";
	cin>>number1>>number2>>number3;
	add(number1,number2,number3); //actual parameter
	cout<<"control back to main";
	
}


