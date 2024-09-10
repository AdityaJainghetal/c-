#include <iostream>
using namespace std;

int main(){
	int sum=0;
	int n;
	cout<<"Enter your number: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i==n){
			cout<<i<<"=";
		}
		else{
			cout<<i<<"+";
		}
		sum=sum+i;
	}
	cout<<sum;
}
