#include <iostream>
using namespace std;

int main(){
//	int upper=0,lower=0,digit=0;

	string s="APPLE is GOOD 4 health",newstring="";
	
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i]))
	     	continue;
	     	newstring=newstring+s[i];
	}

		
	cout<<newstring;
}
