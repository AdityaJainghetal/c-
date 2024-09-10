#include <iostream>
using namespace std;

int main(){
	int age;
	string eligible;
	
	cout<<"Enter your age:";
	cin>>age;
	cout<<"Are you eligible type 'Male' or 'Female' ?????";
	cin>>eligible;
	
	age>=21 && eligible=="Male" || age>=18 && eligible=="Female" ? cout<<"u r eligible":cout<<"u r not eligible";

}
