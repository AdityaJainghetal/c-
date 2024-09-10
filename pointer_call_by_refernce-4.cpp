#include <iostream>
using namespace std;

void swap(int &n1, int &n2){
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	
}
int main(){
	int n1,n2;
	cout<<"Enter your number:";
	cin>>n1>>n2;
	swap(n1,n2);
	cout<<"After swaping number: "<<n1<<" "<<n2<<endl;	

}
