#include <iostream>
using namespace std;

int main(){
	int number;
	int marks;
	cout<<"enter your number: ";
	cin>>number>>marks;
	
	
	int *p1= &number;  //& ampersand (address of)
	int *p2= &marks;
	
	*p1=*p1+*p2;
		cout<<"data of number: "<<" "<<*p1<<endl;
}
