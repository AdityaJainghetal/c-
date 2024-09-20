#include <iostream>
using namespace std;

int main(){
	string str;
	for(int i='a';i<'z';i++){
		if(str[i]){
			str[i]=toupper(str[i]);
		}
		if(str[i]==' '){
			str[i+1]=toupper(str[i+1]);
		}
	}
	cout<<str;
	
}
