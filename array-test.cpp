#include <iostream>
using namespace std;

int main(){
	int arr[5]={1,2,3,4,5};
	int n;
	cout<<"Enter your number: ";
	cin>>n;
	bool number = false;
	
	for(int i=0;i<4;i++){
		if(arr[i]==n){
			number=true;
//			cout<<"present number: ";
		}
	
	}
		if(number==true){
			cout<<"present number: ";
		}
		else{
			cout<<"not present number: ";
		}
		
}
