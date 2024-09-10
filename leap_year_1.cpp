#include <iostream>
using namespace std;

int main(){
	int year;
	cout<<"Enter your year: ";
	cin>>year;
	
	if((year%4 == 0 && year%100!= 0 ) || year%400 == 0){
		cout<<"its a leap year: ";
		
	}	
	
	else{
		cout<<"its a not leap year";
	}	
	
}
