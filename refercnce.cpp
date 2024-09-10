//referance;

//		it is special identifier which is actually a alias of a other variable;
//or we called them other name of variable;

//it must be initalised at the time of decleration;

//pointer                         //referance

#include <iostream>
using namespace std;

int main(){
	int number1 =99,number2=67;
	int &digit1= number1;	//reference
	digit1=900;
	
	cout<<number1;
	
//	int  *ptr=&number1;
//	ptr=&number2;
//	cout<<ptr;
}
