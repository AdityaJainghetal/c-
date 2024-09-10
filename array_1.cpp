#include <iostream>
using namespace std;

int main(){
	
	string name[5]={"ajay","vikas","sumit","vikas","danish"};
	string key;
	cout<<"Enter key: ";
	cin>>key;
	bool found=false;
	for(int i=0;i<5;i++){
		if(name[i]==key){
			cout<<"key present at index: "<<i<<endl;
			found=true;
		}
	}
	if(found==false){
		cout<<"Result: not found";
	}
	else{
		cout<<"Result: found";
	}
}
