#include <iostream>
using namespace std;

int main(){
	int price,pens,cost,total,discout;
	cout<<"Enter your pens cost: ";
	cin>>price;
	pens = 70;
	
	cost = price*pens;
	
	if(cost>1000){
	
	
		discout = cost*0.2;
		cout<<"your discout is: "<<discout<<endl;
		total = discout+cost;
		cout<<"your total cost is: "<<total<<endl;
}
		
		else if(1000<cost){
		
			discout = cost*0.1;
		cout<<"your discout is: "<<discout<<endl;
		total = discout+cost;
		cout<<"your total cost is: "<<total<<endl;
	
	}
	
	else{
		cout<<"you did not get discout"<<cost<<endl;
	
}
}
