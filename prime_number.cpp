//write a program to determine weather a number passed by user is prime number or not?

//note-
		//The highest factore possible of a number is its half


#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your number: ";
	cin>>num;
	bool prime=true;
	
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
//			cout<<i<<endl;
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
