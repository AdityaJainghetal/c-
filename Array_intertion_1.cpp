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
	int n;
	cout<<"Enter n:";
	cin>>n;
	int marks[n];
	for (int i=0;i<n;i++){
		cout<<"Enter marks of student stored at index"<<i<<":";
		cin>>marks[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<"marks of student stored at index"<<i<<":"<<marks[i]<<endl;
	}
}
