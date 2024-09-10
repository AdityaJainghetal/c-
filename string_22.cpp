#include <iostream>
using namespace std;

int main(){
	string name="cpp is a powerfull langugue";
	
	//cout<<"Enter your name";
	//cin>>name;
	int size=name.size();
	
	for(int i=0;i<size;i++){
		if(name[i]== ' '){
			name[i]='"  , "';
			
	}
}
	cout<<name<<endl;

}

