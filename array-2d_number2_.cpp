//write a program to create to 2-d array and display them?

#include <iostream>
using namespace std;

int main(){
	int row,column;
	cout<<"Enter your row and column: ";
	cin>>row>>column;
	int sum;
	int marks[row][column];
	sum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<"Enter data for index"<<i<<j<<" "<<endl;
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
		cout<<endl;

	}
		
}
