#include <iostream>
using namespace std;

void f1(int n){
	if(n>5)
	return;
	
	
	cout<<"this is function f1() , current n value is: "<<n<<endl; //tall
f1(n+1);
}

int main(){
	f1(1);
}
