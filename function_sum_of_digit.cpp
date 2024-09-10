#include <iostream>
using namespace std;

void sumOfDigit(int n){
	int sum=0,last;
	while(n>0){
		last=n%10;
		sum=sum+last;
		n=n/10;
	}
cout<<sum;	
}
	
	
int main(){
	int n=1234;
	sumOfDigit(n);
	
}
