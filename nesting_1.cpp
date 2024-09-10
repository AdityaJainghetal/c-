#include <iostream>
using namespace std;

int main(){

int a,b,c;
cout<<"Enter 3 numbers:";
cin>>a>>b>>c;
if(a>b && a>c){
	cout<<a<<"is greatest";
	if(b>c)
	cout<<b<<"is second greatest";
	else
	cout<<c<<"is second greatest";
}
else if(b>a && b>c){
	cout<<b<<"is greatest";
	if(a>c)
	cout<<a<<"is second greatest";
	else
	cout<<c<<"is second greatest";
}
	else{
		cout<<c<<"is greatest";
	if(a>b)
	cout<<a<<"is second greatest";
	else
	cout<<b<<"is second greatest";
	}
}

