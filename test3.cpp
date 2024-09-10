#include <iostream>
using namespace std;

int main(){
	int num1,last,sum=0,temp;
	cout<<"Enter your number: ";
	cin>>num1;
	temp=num1;
	while(num1>0){
		last= num1%10;
		sum=sum+last;
		num1=num1/10;
//		sum=sum+num1;
	}
		
		cout<<"it is a armstrong number:"<<sum<<endl;
	
	
}
