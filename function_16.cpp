//write a program to find out the addition of three number?

#include <iostream>
using namespace std;

//global space,global variable, class, structure...
int calculator(int,int,string); //prototype,signature,declaration


int main(){
	int number1,number2;
	string operation;
	cout<<"enter 2 number : ";
	cin>>number1>>number2;
	cout<<"enter your op:";
	cin>>operation;
	int result=calculator(number1,number2,operation); //actual parameter
	cout<<"Result: "<<result;
	
}

int calculator(int num1,int num2,string operation){
		if(operation=="add")
			return num1+num2;
			
		else	if(operation=="sub")
			return num1-num2;
			
		else	if(operation=="milti")
			return num1*num2;
			
		else	if(operation=="division")
			return num1/(float)num2;
		
}
