#include <iostream>
using namespace std;

int main(){
	int age;
	string eligible;
	
	cout<<"Enter your age";
	cin>>age;
	cout<<"Are you eligible to casting vote 'y' or 'n'";
	cin>>eligible;
	
	age>=18 && eligible=="y" ? cout<<"u r eligible":cout<<"u r not eligible";
}
