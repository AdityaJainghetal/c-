#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your number: ";
	cin>>num;
	
	if(num>=60){
		cout<<"your grade is A: "<<num<<endl;
	}
	else if(num>=50){
		cout<<"your grade is B: "<<num<<endl;
	}
	
	else if(num>=40){
		cout<<"your grade is C: "<<num<<endl;
	}
	else if(num<40){
		cout<<"your grade is D: "<<num<<endl;
	}
}
