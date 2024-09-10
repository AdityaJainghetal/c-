#include <iostream>
using namespace std;

int main(){
	int n,result=1,base,power;
	cout<<"Enter your number";
	cin>>base;
	cout<<"Enter your power";
	cin>>power;
	
	for(int i=1;i<=power;i++){
		result=result *base;
		
	}
	cout<<result;
}

