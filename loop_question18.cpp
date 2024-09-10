#include <iostream>
using namespace std;

int main(){
	char alpa,A,Z,a,z;
	cout<<"Enter your character: ";
	cin>>alpa;
	
	if(alpa<='Z' && alpa>='A'){
		cout<<"Your character is upper case: "<<alpa<<endl;
	}
	else if(alpa<='z' && alpa>='a'){
		cout<<"Your character is lower case: "<<alpa<<endl;
	}
	else{
		cout<<"Invalid character"<<endl;
	}
}
	

