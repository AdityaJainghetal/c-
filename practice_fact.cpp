#include <iostream>
using namespace std;

void fact(int num){
	int fact=1;
	for(int i=num;i>=1;i--){
		fact=fact*i;
	}
	cout<<"Factorial of number: "<<fact<<endl;
};

int main(){
	int num;
	cout<<"Enter your number: ";
	cin>>num;
	fact(num);
//	cout<<fact<<endl;
}
