#include <iostream>
using namespace std;

int main(){
	int salary;
	double da,total,hra;
	cout<<"Enter your Salary: ";
	cin>>salary;
	
	if(10000>=salary){
		hra = (salary*0.2);
		cout<<"you are hra:"<<hra<<endl;
		da = (salary*0.8);
		cout<<"you are da:"<<da<<endl;
		total= hra+da+salary;
		cout<<"you are total salary: "<<total<<endl;
		
		
	}
	
	else if(20000>=salary){
		hra = (salary*0.25);
		cout<<"you are hra:"<<hra<<endl;
		da = (salary*0.9);
		cout<<"you are da:"<<da<<endl;
		total= hra+da+salary;
		cout<<"you are total salary: "<<total<<endl;
		
	}
	
	else if(salary>20000){
		hra = (salary*0.3);
		cout<<"you are hra:"<<hra<<endl;
		da = (salary*0.95)+salary;
		cout<<"you are da:"<<da<<endl;
		total= hra+da+salary;
		cout<<"you are total salary: "<<total<<endl;
		
	}
	
	else{
		cout<<"you are not eligible"<<salary<<endl;
	}
	
	
	
	
	}
	
