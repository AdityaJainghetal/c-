#include <iostream>
using namespace std;

int main(){
	int upper=0,lower=0,digit=0;
	string s="APPLE is GOOD 4 health";
	
	for(int i=0;i<s.size();i++){
		if(isupper(s[i])){
		
			upper++;
		}
		
	else if(islower(s[i])){
			lower++;
		}
		
	else if(isdigit(s[i])){
			digit++;
		}
	}
	cout<<"upper: "<<upper<<" Lower: "<<lower<<" digit: "<<digit<<endl;
}
