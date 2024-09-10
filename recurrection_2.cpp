#include <iostream>
using namespace std;

void f1(int n)


{
	if(n>5){
		return;
	}
//	cout<<"this is function f1: "<<n<<endl;
	f1(n+1);
	cout<<"this is function f1: "<<n<<endl;
}

int main(){
	f1(1);
	
	
}
