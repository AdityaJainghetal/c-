#include <iostream>
using namespace std;

int main(){
	int n,n1=0,n2=1,n3;
cout<<"Enter number: ";
cin>>n;


cout<<n1<<" "<<n2<<" ";
for(int i=1;i<=n-2;i++){

	if(n3%5 != 0){
			n3=n1+n2;
	
			cout<<n3<<" ";
		n1=n2;
		n2=n3;
	}
}
}
