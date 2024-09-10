//passing array and function 
//excess element of array with help of pointer
//write a program to increment of all the element of array using pointer

#include <iostream>
using namespace std;

void increment_10(int arr[],int size){
			int *p=arr;
			for(int i=0;i<size;i++){
			arr[i]=p[i]+10;
	
		}
	
}




int main(){
		int arr[]= {34,5,66,7,8,8};
		int size=sizeof(arr)/sizeof(arr[0]);
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	increment_10(arr,size);	
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
	}
	
	
