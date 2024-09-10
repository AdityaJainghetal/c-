#include <iostream>
using namespace std;

int main(){
	int Arr[3][3]={3,2,3,4,5,6,7,8,9};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i!=j){
				Arr[i][j]=0;
			}
			
		}
	}
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
