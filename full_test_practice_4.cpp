#include <iostream>
using namespace std;

bool ispalindrom(const string &str){
	int start=0;
	int end=str.length()-1;
	
	while(start<end){
		if(str[start]!=str[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
	
	
	
}

int main(){
	string input;
	cout<<"Enter your string: ";
	cin>>input;

	if(ispalindrom(input)){
		cout<<input<<" is a palindrom";
	}
	
	
	else{
		cout<<input<<" it is not a palindrom";
	}
//return 0;

}


