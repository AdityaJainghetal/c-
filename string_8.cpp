#include <iostream>
using namespace std;

int main(){
	string fruit,reverse="";
	cout<<"Enter your number:";
	cin>>fruit;
	int size=fruit.size();
	for(int i=size-1;i>=0;i--){
		reverse=reverse+fruit[i];
	}
	
	if(fruit==reverse)
		cout<<"palindrome";
	else
	cout<<"no";
}
