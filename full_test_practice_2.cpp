#include <iostream>
using namespace std;

void Add(int A[],int size){
	int sum=0;
	for(int i=0;i<=size;i++){
		if(A[i]%10==4){
		sum+=A[i];
		}
		
	}
	cout<<"Sum of element ending with 4: "<<sum<<endl;
}

int main(){

	
	int arr[4]={24,16,14,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	Add(arr,size);
	
}
