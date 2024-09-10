#include <iostream>
using namespace std;

int main(){
//	int upper=0,lower=0,digit=0;
	string s="APPLE is GOOD 4 health";
	
	for(int i=0;i<s.size();i++){
		if(isupper(s[i])){
		
		s[i] =	tolower(s[i]);
		}
		
	else if(islower(s[i])){
			s[i] =	toupper(s[i]);
		}
		
//	else if(isdigit(s[i])){
//			s[i] = "$";
//		}
	}
//	cout<<"upper: "<<upper<<"Lower: "<<lower<<"digit: "<<digit<<endl;
	cout<<s;
}
