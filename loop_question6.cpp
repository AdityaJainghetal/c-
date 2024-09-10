#include <iostream>
using namespace std;

int main(){
	int n,num,sum=0;
	cout<<"Enter your range: ";
	cin>>n;
	
	
	for(int i=1;i<=n;i++){
		cout<<"Enter your number: "<<endl;
		cin>>num;
//		cout<<i<<endl;
		sum=sum+num;
		cout<<"Sum of all number: "<<sum<<endl;
	}
}
