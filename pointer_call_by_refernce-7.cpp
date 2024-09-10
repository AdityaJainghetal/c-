//passing array and function 
//excess element of array with help of pointer

#include <iostream>
using namespace std;

void increment_10(int arr[],int size){
			for(int i=0;i<size;i++){
			arr[i]=arr[i]+10;
	
		}
	
}




int main(){
		int arr[]= {34,5,66,7,8,8};
		int size=sizeof(arr)/sizeof(arr[0]);
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		
		cout<<endl;
		increment_10(arr,size); 	//we actually pass base address) call by refernce
		for(int i=0;i<size;i++){ 	//size passing behave as call by value.
			cout<<arr[i]<<" ";
		}	
	}
