#include <iostream>
using namespace std;

int main(){

int a,b,c;
cout<<"Enter 3 numbers:";
cin>>a>>b>>c;
if(a>b && a>c){
	cout<<a<<"is greatest";
}
else if(b>c && b>c){
	cout<<b<<"is greatest";
}
	else{
		cout<<c<<"is greatest";
	}
}


