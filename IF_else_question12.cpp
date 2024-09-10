#include <iostream>
using namespace std;

int main(){
	int temperature;
	cout<<"Enter your temerature: ";
	cin>>temperature;
	
	if(temperature<0){
		cout<<"Your freezing temperature: "<<temperature<<endl;
	}
	else if(temperature<=10 && temperature>=0){
		cout<<"Your Cold temperature: "<<temperature<<endl;
		
	}
	else if(temperature>=20 && temperature<=30){
		cout<<"its normal temperature: ";
		
	}
	else{
		cout<<"its Very hot temperature";
	}
}
