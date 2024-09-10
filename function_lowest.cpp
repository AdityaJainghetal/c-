#include <iostream>
using namespace std;

int lowest(int arr[],int length){
	for(int i=1;i<6;i++){
		if(arr[i]<lowest){
			lowest=arr[i];
		}
	}
//	return lowest;
}

int main(){
	int lowest[]={22,33,44,55,66};
	int size=sizeof(arr)/sizeof(arr[0]);
	int lowestnew=lowest(arr,size);
	cout<<"The max of arr is"<<lowestnew;
	}
