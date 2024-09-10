#include <iostream>
using namespace std;

int main(){
	int num,hra,da,hra_total;
	cout<<"Enter your number: ";
	cin>>num;
	
	if(num<=10000 && num<=20000){
		hra = num*0.2;
		hra_total = hra+num;
		cout<<"Hra"<<hra_total<<endl;
		da = num*0.8;
		cout<<"total_Salary : "<<da+hra_total<<endl;
	}
	
		else if(num<=20000){
		hra = num*0.25;
		hra_total = hra+num;
		cout<<"Hra"<<hra_total<<endl;
		da = num*0.9;
		cout<<"total_Salary :"<<da+hra_total<<endl;
	}
	
	
		else if(num>20000){
		hra = num*0.3;
		hra_total = hra+num;
		cout<<"Hra :"<<hra_total<<endl;
		da = num*0.95;
		cout<<"total_Salary :"<<da+hra_total<<endl;
	}
	
	else{
		cout<<"you did not get promoted your salary is: "<<num<<endl;
	}
}
