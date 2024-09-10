#include <iostream>
using namespace std;

int main(){
	float number_1,number_2,number_3,smaller;
	cout<<"Enter your number_1 value: ";
	cin>>number_1;
	cout<<"Enter your number_2 value: ";
	cin>>number_2;
	cout<<"Enter your number_3 value: ";
	cin>>number_3;
	
	if(number_1>number_2){
		smaller = number_1<number_3;
		cout<<"you smaller number: "<<smaller<<endl;
	}
	
	else if(number_1>number_3){
	smaller = number_1<number_2;
		cout<<"you smaller number: "<<smaller<<endl;
	}
	
		else if(number_1<=number_2){
		smaller = number_2<number_3;
		cout<<"you smaller number: "<<smaller<<endl;
	}
	
		else if(number_1<=number_3){
		smaller = number_1<number_3;
		cout<<"you smaller number: "<<smaller<<endl;
	}
	
		else if(number_1<=number_2){
		smaller = number_1<number_2;
		cout<<"you smaller number: "<<smaller<<endl;
	}
}
