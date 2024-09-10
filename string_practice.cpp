#include <iostream>
#include <string>
using namespace std;


int main(){
	string s="hello world";
	string snew="";
	for(int i = s.length();i>=0;i--){
		snew=snew+s[i];
		
	}
	cout<<snew;
}
