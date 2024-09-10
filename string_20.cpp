#include <iostream>
using namespace std;

int main(){
	string name="cpp is a powerfull langugue";
	string name1=" ";
	
	//cout<<"Enter your name";
	//cin>>name;
	int size=name.size();
	
	for(int i=0;i<size;i++){
		if(name[i]== ' '){
			continue;
		}
		name1=name1+name[i];
	}
	cout<<name1<<endl;
}
