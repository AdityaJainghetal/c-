#include <iostream>
using namespace std;

int main(){
	string fruit,p;
	cout<<"Enter your text:";
	cin>>fruit;
	
	int size=fruit.size();
	for(int i=size-1;i>=0;i--){
	
		if(fruit[i]=='p'){
			fruit[i]='$';
		}
	}
	
	cout<<fruit<<endl;
	}
