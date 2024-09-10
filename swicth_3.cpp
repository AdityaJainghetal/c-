#include <iostream>
using namespace std;

int main(){
   // int num1;
	char choice;
//	cout<<"Enter 1 number: ";
//	cin>>num1;
	cout<<"Enter your choice 1,2,3,4,5,6,7: ";
	cin>>choice;
	switch(choice){
		case '1' : cout<<"Monday"<<endl;
		break;
		case '2' : cout<<"Thusday"<<endl;
		break;
		case '3' : cout<<"Wednesday"<<endl;
		break;
		case '4' : cout<<"Thuesday"<<4<<endl;
		break;
		case '5' : cout<<"Friday"<<endl;
		break;
		case '6' : cout<<"Saturday"<<endl;
		break;
		case '7' : cout<<"Sunday"<<endl;
		break;
				
		default : cout<<"Invalid choice";
		break;
	
	
	}
	}
