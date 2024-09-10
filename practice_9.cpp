#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter your number: ";
	cin>>n;
	
	int even[n];
	
	cout<<"Enter your"<<n <<"number: ";
	for(int i=0;i<n;i++){
		cin>>even[i];
	}
	
	
	
	for(int i=0;i<n;i++){
		if(even[i]%2==0){
		cout<<even[i]<<" ";
		}
	}
}
