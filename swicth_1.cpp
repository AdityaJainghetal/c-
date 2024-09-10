#include <iostream>
using namespace std;

int main(){
	//write a program to create a calculaterusing switch case
	int num1,num2;
	char choice;
	cout<<"Enter 2 number: ";
	cin>>num1>>num2;
	cout<<"Enter your choice +,-,*,/";
	cin>>choice;
	switch(choice){
		case '+': cout<<"Add"<<num1+num2;
		break;
		case '-': cout<<"Sub"<<num1-num2;
		break;
		case '*': cout<<"Multi"<<num1*num2;
		break;
		case '/': cout<<"Division"<<num1/(float)num2;
			break;
		
		default : cout<<"Invalid choice";
		break;
	}
	
	
	
		
	
}
