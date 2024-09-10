#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter your range";
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			cout<<"Even number: "<<arr[i]<<" "<<endl;
		}
		
			if(arr[i]%2!=0){
			cout<<"odd number: "<<arr[i]<<" "<<endl;
		}
	}
}
