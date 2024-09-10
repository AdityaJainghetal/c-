#include <iostream>
using namespace std;

int main(){
	int number;
	string option;

	
	cout<<"Enter your number";
	cin>>number;
	cout<<"this number is positive type or negative type 'p' or 'n' ";
	cin>>option;
	
	number>=0 && option=="p" || number<=0 && eligible=="n" ? cout<<"postive number":cout<<"negative number";
}
