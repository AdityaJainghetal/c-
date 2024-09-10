#include <iostream>
using namespace std;

int main(){
	int number;
	int marks;
	cout<<"enter your number: ";
	cin>>number>>marks;
	
	
	int *p1= &number;  //& ampersand (address of)
	int *p2= &marks;
	
	if(*p1<*p2){
	
		cout<<"data of number: "<<" "<<*p2<<endl;
	}
		else{
			cout<<*p1<<endl;
		}		
}
