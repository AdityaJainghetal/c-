#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter the number a,b,c :";
	cin>>a>>b>>c;
	
	cout<<"a>b && b<c ------->"<<(a>b && b<c)<<endl;
	cout<<"a>b || b<c -------> "<<(a>b || b<c)<<endl;
	cout<<"not of a==b -------> "<<!(a==b)<<endl;
	
}
