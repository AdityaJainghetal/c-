#include <iostream>
using namespace std;

int main(){
	int n,num,sum=0;
	cout<<"Enter your range: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cout<<"Enter your number: ";
		cin>>num;
		sum=sum+num;
		cout<<"Your sum is: "<<sum<<endl;
	}
}
