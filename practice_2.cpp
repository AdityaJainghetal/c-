#include <iostream>
using namespace std;

int main(){
	int row,column;
	cout<<"Enter your number: ";
	cin>>row>>column;
	int sum=0;
	int marks[row][column];
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<"Enter your number: "<<i<<j<<endl;
			cin>>marks[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
		
		cout<<i<<j<<" : "<<marks[i][j]<<endl;
		sum=sum+marks[i][j];
		cout<<endl;
		
	}
}
	
}