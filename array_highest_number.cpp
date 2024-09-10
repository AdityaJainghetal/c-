#include <iostream>
using namespace std;

int main(){
	int arr[5]={23,45,68,24,78};
	int max=arr[0]; //23
	
	for(int i=1;i<=4;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		
	}
	cout<<"maximum number: "<<max;
}
