//write a program to find the sum of n natural number start from 1?and 
//also display the given format

 

#include <iostream>
using namespace std;

int main(){
	int n,sum=0;
	cout<<"Enter your range: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		
		cout<<i;
		if(i<n){
			cout<<"+";
		}
		sum=sum+i;
		
	}
	cout<<"="<<sum;
}
