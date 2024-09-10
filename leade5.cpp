#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	if(age<=13){
		cout<<"Child age: "<<age<<endl;
	}
	else if(age<=13 && age<20){
		cout<<"Teenager age: "<<age<<endl;
	}
	else if(age<=20 && age<65){
		cout<<"Adult age: "<<age<<endl;
	}
	else{
		cout<<"Senior age: "<<age<<endl;
	}
}
