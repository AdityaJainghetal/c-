#include <iostream>
using namespace std;

int main(){
	int n,fact=1;
	cout<<"Enter your number: ";
	cin>>n;
	
	for(int i=n;i>=1;i--){

		fact=fact*i;
	
	}
	   cout << "Factorial of " << n << " is: " << fact << endl;
}
