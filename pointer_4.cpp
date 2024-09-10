#include <iostream>
using namespace std;

int main(){
	string length;
	int count=0;
	
	
	
	cout<<"enter your name: ";
	cin>>length;
	
string *p1 = &length;
	int *p2 = &count;

	
	
		int size = length.size();
			for(int i=0;i<size-1;i++){
	(*p2)++;
	
	
}

cout<<*p2;
}
