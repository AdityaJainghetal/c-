#include <iostream>
using namespace std;

int main(){

int arr[3][3]={1,1,2,5,6,7,5,5,5};

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		if(i!=j){
			arr[i][j]=0;
		}
	}
}

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
}
