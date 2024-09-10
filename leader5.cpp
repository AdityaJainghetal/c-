#include <iostream>
using namespace std;

int main(){
	int amount,total,dic;
	cout<<"Enter your amount: ";
	cin>>amount;
	
	if(amount>=1000){
		dic=amount*0.20;
		cout<<"Your dicount is: "<<dic<<endl;
		total=amount+dic;
		cout<<"Your total amount is: "<<total<<endl;
	}
	
	else if(amount>=500){
		dic=amount*0.10;
		cout<<"Your dicount is: "<<dic<<endl;
		total=amount+dic;
		cout<<"Your total amount is: "<<total<<endl;
	}
	
    else if(amount<500){
		cout<<"Your total amount is: "<<amount<<endl;
	}
	
	else{
		cout<<"Invalid: "<<amount<<endl;
	}
}
