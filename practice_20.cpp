#include <iostream>
#include <string>
using namespace std;


int main(){
	string str = "power of github";
	int length=str.size();
	for(int i=0;i<length;i++){
		if(str[i]=='p'){
		str[i]=	toupper(str[i]);
		}
	}
	cout<<str<<endl;
}
