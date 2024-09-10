#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter your 3 number: ";
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		cout<<"your greatest number: "<<a<<endl;
		
		if(b>c)
			cout<<"your second greatest number: "<<b<<endl;	
	
			else
				cout<<"your second greatest number: "<<c<<endl;
	}
	
	else if(b>a && b>c){
		cout<<"your greatest number: "<<a<<endl;
		
		if(a>c)
			cout<<"your second greatest number: "<<a<<endl;	
	
			else
				cout<<"your second greatest number: "<<c<<endl;
	}
	
	else{
		cout<<"your greatest nuumber: "<<c<<endl;
		if(a>b)
		cout<<"your second greatest number: "<<a<<endl;
		else
			cout<<"your second greatest number: "<<b<<endl;
	}
}
