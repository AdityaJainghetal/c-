//write a program to find the number of student how had failed in examination
#include <iostream>
using namespace std;

int main(){
	int marks[8]={37,44,5,67,87,36,23,39};
	int n=8;
	for (int i=0;i<n;i++){
		cout<<marks[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		if(marks[i]<40){
			cout<<"failed student index"<<i<<"marks"<<marks[i]<<endl;
		}
	}
	for(int i=0;i<n;i++){
		cout<<marks[i]<<" ";
	}
}
