#include <iostream>
using namespace std;

int main(){
	int n,temp,last=0,sum=0;
	cout<<"Enter your number: ";
	cin>>n;
	
	temp=n;
	
	
	
	while(n>0){
		last=n%10;
		sum=sum*10+last;
		n=n/10;
	}
	if(temp==sum){
		cout<<temp<< " "<<"it is plendrum number: "<<endl;
		
	}
	else{
			cout<<"it is not plendrum number"<<endl;
		}
	
}
