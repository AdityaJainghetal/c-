#include <iostream>
using namespace std;

int main(){
	int arr[8]={34,56,23,34,4,34,56,9};
	int new_arr[8];
	int i=0;
	bool found;
	
	for(int j=1;j<8;j++){
		found=false;
		
		for(int k=0;k<8;k++){
			if(arr[j]==new_arr[k]){
				found=true;
				break;
			}
		}
		if(found==false){
			new_arr[i]=arr[j];
			i++;
		}
		
	}
	for(int j=0;j<i;j++){
	
		cout<<new_arr[j]<<" ";
			}
}
