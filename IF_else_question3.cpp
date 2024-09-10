#include <iostream>
using namespace std;

int main(){
	int year; 
	double salary,bonus; //15basespoint also get decimal value
	string name;
	cout<<"enter your name:";
	cin>>name; 
	cout<<"enter year of service and current salary:";
	cin>>year>>salary;
	cout<<"hello"<<name<<"your salary details/n";
	if(year>5){
		bonus=salary*(5.0/10);
		cout<<"total bonus:"<<bonus<<endl;
		cout<<"salary:"<<salary+bonus<<endl;
	}
	
	else{
	cout<<"total bonus:"<<endl;
	cout<<"Salary:"<<endl;
	}
}
