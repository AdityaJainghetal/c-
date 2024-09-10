//write a program to demostrate exception handling with the help of program to input?

//take 2 input from a user again and again , untile user type 'e' throw an exception
//1.  if the result of addition is going to be greater then 100.
//2. if the user entered any character other then 'e' or 'y'.

#include <iostream>
using namespace std;

int main(){
	int num1;
	int num2;
	char choice='y';
	try{
		while(choice=='y'){
			cout<<"Enter your 2  number: ";
			cin>>num1>>num2;
			if(num1+num2>100){
				throw  num1+num2;
			}
			cout<<"Add: "<<num1+num2<<endl;
			cout<<"do you want to contine 'y' or 'e' : ";
			cin>>choice;
			if(choice!='y' && choice!='e'){
				throw choice;
			}
		}
	}
	
	catch (...){    //elipsis opertion
			cout<<"Exception: ";
		
	}
	

	
}
