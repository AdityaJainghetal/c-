#include <iostream>
using namespace std;

int main(){
	int n,n1=0,n2=1,n3;
	cout<<"Enter your range: ";
	cin>>n;
	
	cout<<n1<<" "<<n2<<" ";
	for(int i=1;i<=n-1;i++){
		n3=n1+n2;
		cout<<n3<<" ";
//		if(n3%5!=0) //condtion
//		cout<<n3<<" ";
		n1=n2;
		n2=n3;
		
	}
}
