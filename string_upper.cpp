#include <iostream>
using namespace std;

int main(){
	string str="pass by value and reference";
	int length=str.length();
	for(int i=0;i<length;i++){
		if(i==0){
			str[i]=toupper(str[i]);
		}
		if(str[i]==' '){
			str[i+1]=toupper(str[i+1]);
		}
	}
	cout<<str;
	
}
