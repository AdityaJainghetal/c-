//write a program to find out the addition of three number?

#include <iostream>
using namespace std;

//global space,global variable, class, structure...
void avag(int num1,int num2,int num3,int num4,int num5){
	cout<<"total()\n"; //formal
		int addition = num1+num2+num3+num4+num5;
		int avg = addition/5;
		cout<<"average of this number: "<<avg<<endl;
	
}

int main(){
	int number1,number2,number3,number4,number5;
	cout<<"enter 5 number : ";
	cin>>number1>>number2>>number3>>number4>>number5;
	int avg;
	avag(number1,number2,number3,number4,number5); //actual parameter
	cout<<"control back to main";
	
}


