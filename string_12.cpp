#include <iostream>
using namespace std;

int main(){
	string name;
	cout<<"Enter your name";
	cin>>name;
	int size=name.size();
	for(int i=size;i>=0;i--){
		if(name[i]=='p'){
			name[i]='+';
		}
	}
	cout<<name<<endl;
}
