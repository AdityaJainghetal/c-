#include <iostream>
using namespace std;

int main(){
	int num1,num2,highest;
	cout<<"Enter your number: ";
	cin>>num1>>num2;
	
	
	if(num1>num2){
		highest=num1;
	}
	else{
		highest=num2;
	}
	
	
	for(int i=highest; ;i++){
		if(i%num1==0 && i%num2==0){
			   cout<<"LCM "<< i<<endl;
			   break;
		}
	}
	
	
	
	
	
	
		
}
