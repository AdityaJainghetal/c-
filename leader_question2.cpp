#include <iostream>
using namespace std;

int main(){
	int cost;
	cout<<"Enter you cost";
	cin>>cost;
	double discount;
	
	if(cost<2000){
		discount= cost*(5.0/100);
		cout<<"discont:"<<discount<<endl;
		cout<<"you total cost price:"<<cost-discount<<endl;
		
	}
	
	else if(cost>=2000 && cost<=5000){
		discount= cost*(25.0/100);
		cout<<"discont:"<<discount<<endl;
		cout<<"you total cost price:"<<cost-discount<<endl;
		
	}
	
	
	else if(cost>=5001 && cost<=10000){
		discount= cost*(35.0/100);
		cout<<"discont:"<<discount<<endl;
		cout<<"you total cost price:"<<cost-discount<<endl;
		
	}
	
	
	else if(cost>=10000){
		discount= cost*(50.0/100);
		cout<<"discont:"<<discount<<endl;
		cout<<"you total cost price:"<<cost-discount<<endl;
		
	}
	
	else{
		cout<<"you did't get discount:";
	}

}
