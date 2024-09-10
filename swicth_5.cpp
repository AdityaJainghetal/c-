#include <iostream>
using namespace std;

int main(){
	int number,unit;
	cout<<"Enter your number: ";
	cin>>number;
	cout<<"Enter your number change for 1 for meter to centimter, 2 for centimeter to meter, 3 for km to miles , 4 for miles to km  : ";
	cin>>unit;
	
	switch(unit){
	case 1 :
	 cout<<"Meter change into centimeter: "<<number*100<<endl;
	break;
	case 2 : 
	cout<<"Centimeter change into meter: "<<number*float(0.01)<<endl;
	break;
	case 3 : 
	cout<<"km into change miles: "<<number*(float)1.609344<<endl;
	break;
	case 4 : 
	cout<<"miles change into km: "<<number*1000<<endl;
	break;
	
	default : cout<<"Select 1-4"<<endl;
	break;
	}
}
