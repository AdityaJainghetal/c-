#include <iostream>
using namespace std;

int main(){
	int weight,item;
	cout<<"Enter your weight 5kg,10kg,15kg,20kg: ";
	cin>>weight;
	cout<<"Enter your item: ";
	cin>>item;
	
	
	switch(weight){
		case '5' : cout<< "Your weight is upto 5km and price: "<<item*5<<endl;
		break;
		case 10 : cout<<"Your weight is upto 10km and price: "<<item*10<<endl;
		break;
		case 15 : cout<<"Your weight is upto 15km and price: "<<item*15<<endl;
		break;
		case 20 : cout<<"Your weight is upto 20km and price: "<<item*20<<endl;
		break;
	}
	
}
