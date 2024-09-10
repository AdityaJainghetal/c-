#include <iostream>
using namespace std;

int main(){
	int n,sum=0,j=0;
	cout<<"Enter your number: ";
	cin>>n;
	
	int all[n];
	int even[n];
	
	cout<<"Enter your  "<<n<<"number:";
	for(int i=0;i<n;i++){
		cin>>all[i];
	}
	
	for(int i=0;i<n;i++){
		if(all[i]%2==0){
			even[j]=all[i];
			j++;
			
		}
		cout<<endl;
	}
	
	for(int i=0;i<j;i++){
		cout<<even[i]<<" "<<endl;
	}
}

