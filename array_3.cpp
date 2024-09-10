#include <iostream>
using namespace std;

int main(){
	int arr[8]={1,2,3,4,5,2,3,6};
	
	for(int i=0;i<8;i++){
		
	bool uniq = false;
		for(int j=0;j<i;j++){
			if(arr[i]==arr[j]){
			
			uniq=true;
			break;
			
		}
	}
	if(uniq==false){
		cout<<arr[i]<<" ";
		}
	}
}
