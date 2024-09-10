#include <iostream>
using namespace std;


int main(){
	int row,colomn;
	cout<<"Enter your row colomn: ";
	cin>>row>>colomn;
	int sum;
	int marks[row][colomn];
	sum = 0;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<colomn;j++){
			cout<<"Enter your number: "<<i<<j<<endl;
			cin>>marks[i][j];
		}
	}
	cout<<endl;



	for(int i=0;i<row;i++){
		for(int j=0;j<colomn;j++){
			cout<<"Marks is "<<marks[i][j]<<endl;
			sum=sum+marks[i][j];
			cout<<endl;
		}
	}
}
