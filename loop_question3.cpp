#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number to multiply : ";
	cin>>n;
	
	for(int table=n;table>=1;table--){
		cout<<"multiply table for"<<table<<endl;
		
		for(int i=10;i>=1;i--){
			cout<<table<<"x"<<i<<"="<<table*i<<endl;
		}
		cout<<endl;
	}
}
