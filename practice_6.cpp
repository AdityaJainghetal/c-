#include <iostream>
using namespace std;

int main(){
	int Arr[3][3]={34,53,2,4,5,6,7,5,8};
	int sum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
		
		{
			cout<<Arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"-----------"<<endl;
	
	for(int i=0;i<3;i++){
			sum=0;
		for(int j=0;j<3;j++){
		
	
//		cout<<Arr[i][j]<<" ";
		
			sum=sum+Arr[j][i];
		}
		cout<<sum<<" ";
	
}
}
