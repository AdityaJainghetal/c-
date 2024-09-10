#include <iostream>
using namespace std;


void transpose(int Arr[][3],int row,int column,int newArr[][3]){
	for(int i=0;i<row;i++){
	
		for(int j=0;j<column;j++){
				
			newArr[j][i]=Arr[i][j];
		}
	}
}










int main(){
	int arr[3][3]={2,3,4,5,7,6,2,2,45};
	int new_array[3][3];
	
	transpose(arr,3,3,new_array);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"------------"<<endl;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<new_array[i][j]<<" ";
		}
		cout<<endl;
	}
}
