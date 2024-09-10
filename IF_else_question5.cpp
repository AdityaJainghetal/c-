#include <iostream>
using namespace std;

int main(){ 
	float cost,quantity,dicount;  
	cout<<"you are cost_price :";
	cin>>cost;
	cout<<"you are quantity: ";
	cin>>quantity;
     float total=cost*quantity;
if(total>1000){
	dicount = total*(10.0/100);
	cout<<"total discount:"<<dicount<<endl;
	cout<<"cost price:"<<total-dicount<<endl;
		
	}
	
	else{
	//cout<<"cost:"<<cost<<endl;
	cout<<"total"<<total<<endl;
//	cout<<"Salary:"<<endl;
	}
}
