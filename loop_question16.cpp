#include <iostream>
using namespace std;

int main(){
	int n1,n2,small;
	cout<<"Enter 2 number: ";
	cin>>n1>>n2;
	bool HCF=false;
	n1>n2 ? small=n2 : small=n1;
	
	for(int i=small;i>=2;i--){
		if(n1%i==0 && n2%i==0){
	
			cout<<"HCF"<<i<<endl;
			HCF=true;
			break;
			}
		
	}
	if(HCF==false)
		cout<<"No hcf possible";
	
}

