#include <iostream>
using namespace std;

int main(){
	int num1,num2,square,circle,reactangle;
	char choice;
	cout<<"Enter 2 number: ";
	cin>>num1>>num2;
	cout<<"Enter your choice s,c,r: ";
	cin>>choice;
	switch(choice){
		
		case 's' : cout<<"Area of square"<<num1*num1<<endl;
		break;
	
		case 'c' : cout<<"Area of circle"<<(float)3.14*num1*num2<<endl;
		break;
		
		case 'r' : cout<<"Area of reactangle"<<(float)num1*num2<<endl;
		break;
		
		default : cout<<"Invalid choice";
		break;
	}
}
