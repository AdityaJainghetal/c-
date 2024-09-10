//write a program to find out the addition of three number?

#include <iostream>
using namespace std;

void fact(int n){		
		int	fact=1;
		for(int i=n;i>=1;i--){
		fact=fact*i;
	}
	cout<<"Factorial of "<<n<<"is:"<<fact<<endl;
}

int main(){
	int number1;
	cout<<"enter 1 number : ";
	cin>>number1;
	fact(number1); //actual parameter
	
	cout<<"control back to main";
	
}


