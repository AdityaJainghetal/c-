//write a program to find out the addition of three number?

#include <iostream>
using namespace std;

//global space,global variable, class, structure...
int add(int,int,int); //prototype,signature,declaration


int main(){
	int number1,number2,number3;
	cout<<"enter 3 number : ";
	cin>>number1>>number2>>number3;
	int result=add(number1,number2,number3); //actual parameter
	cout<<"Result: "<<result;
	
}

int add(int num1,int num2,int num3){
		return num1+num2+num3;
}
