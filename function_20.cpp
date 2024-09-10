#include <iostream>
using namespace std;

int add(int n){	
	int sum=0;
	int num;
	
	for (int i=1;i<=n;i++){
		cout<<"Enter a number: "<<i<<" ";
		cin>>num;
		
		sum= sum + num;	
		
}
	cout<<"sum of all number"<<sum<<endl;
//	return sum;
}


int main(){
	int n,sum = 0,avg;
	cout<<"Enter range: ";
	cin>>n;
	
	sum = add(n);
	avg = sum/n;
	
	cout<<"avg"<<avg;
	
//	return 0;
	

}
