#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your number: ";
	cin>>num;
	bool prime=true;
	
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			prime=false;
			break;
			
		}
}

	if(prime==true)
		cout<<"Prime number";
		else{
			cout<<"not a prime number";
		}
}
	
