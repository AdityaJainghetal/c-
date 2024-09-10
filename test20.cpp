#include <iostream>
using namespace std;

int main(){
	int cost,selling;
	cout<<"Enter your cost price:";
	cin>>cost;
	cout<<"Enter your selling price:";
	cin>>selling;
	
	if(cost<selling){
		cout<<"you  get profite : "<<selling-cost<<endl;
	}
	else if(cost>selling){
		cout<<"your get lose : "<<cost-selling<<endl;
	}
	else{
		cout<<"not get profite and loss"<<cost<<endl;
	}
	
	
}
