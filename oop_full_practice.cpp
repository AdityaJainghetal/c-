#include <iostream>
using namespace std;

void Fixpay(float pay[],int num){
	for(int i=0;i<num;i++){
		if(pay[i]<100000){
			pay[i]=pay[i]+(pay[i]*0.25);
		}
		else if(pay[i]>=100000 && pay[i]<200000){
			pay[i]=pay[i]+(pay[i]*0.20);
		}
		
		else if(pay[i]>=200000){
			pay[i]=pay[i]+(pay[i]*0.15);
		}
	}
};

int main(){
	float pay[]={8000,120000,250000};
	int num=sizeof(pay)/sizeof(pay[0]);
	
	for(int i=0;i<num;i++){
		cout<<pay[i]<<endl;
	}
	Fixpay(pay,num);



	for(int i=0;i<num;i++){
		cout<<pay[i];
	}
	
}
//return 0;


