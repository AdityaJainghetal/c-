#include <iostream>
using namespace std;

int main(){
	int num1,num2,small;
	cout<<"Enter your number: ";
	cin>>num1>>num2;
	
	num1>num2 ? small = num2 : small = num1;
	
	for(int i=small; i>=2;i--){
		if(num1%i==0 && num2%i==0){
			cout<<"HCF"<<i<<endl;
			break;
		}
	}
	
	
}
