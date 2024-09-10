//write a program to an array of nth size and perform following operation?
// intiation
//display
//revese display
//searching
//addition
//highest pr lowest

#include <iostream>
using namespace std;

int main(){
	int n,sum=0;
	cout<<"Enter n:";
	cin>>n;
	int marks[n];
	for (int i=0;i<n;i++){
		cout<<"Enter marks of student stored at index"<<i<<":";
		cin>>marks[i];
	}
	
	for (int i=0;i<n;i++){
		cout<<marks[i]<<" "<<endl;
		sum=sum+marks[i];
	}
	
	cout<<"Add: "<<sum<<endl;
	cout<<"average: "<<sum/(float)n;
	
	
}
