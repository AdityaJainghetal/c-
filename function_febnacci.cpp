#include <iostream>
using namespace std;

int febnacci(int n){
	int n1=0;
	int n2=1;
	int n3;
	
	
	cout<<n1<<" "<<n2<<" ";
	for( int i=1;i<=n-1;i++){
		n3=n1+n2;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
	}
	
	
}


int main(){
	int n;

	cout<<"Enter your number:";
	cin>>n;
	febnacci(n);
		
	cout<<n;
}
