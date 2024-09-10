//write a program to upper case letter to lower one and vice-verse


#include <iostream>
using namespace std;

int main(){
	string str="Apple 123 A";
	
//	cout<<islower(str[6]);
	for(int i=0;i<=str.size();i++){
		if(isupper(str[i])){
			str[i]=tolower(str[i]);
			
		}
		
		else if(islower(str[i])){
			str[i]=toupper(str[i]);
			
		}
		
		else if(isdigit(str[i])){
			str[i]='$';
			
		}
	
	
}
cout<<str;
}
