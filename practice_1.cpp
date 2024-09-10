#include <iostream>
using namespace std;

int main(){
	int arr[8]={1,2,3,5,2,8,3,5};

	for(int i=0;i<8;i++){
		bool uniq=true;
	
		for(int j=0;j<8;j++){
		
		if(arr[i]==arr[j]){
			uniq=false;
			break;
		};
}
	if(uniq=true){
		cout<<arr[i]<<" ";
		
	}

}}
