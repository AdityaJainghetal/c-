#include <iostream>
using namespace std;

int main(){
	int row,column,sum=0;
	cout<<"Enter your number: ";
	cin>>row>>column;
	
	int marks[row][column];
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
		
		cout<<"Enter your marks"<<i<<j<<" :  ";
		cin>>marks[i][j];
	}
}
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
		cout<<"mark of student: "<<i<<j<<" "<<marks[i][j]<<endl;
		sum=sum+marks[i][j];
		cout<<"sum of subject: "<<sum<<endl;
		}
	}
}

