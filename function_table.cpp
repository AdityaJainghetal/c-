#include <iostream>
using namespace std;

int table(int n){
	for(int i=1;i<=n;i++){
		for(int j=0;j<=10;j++){
		
		
			
		
		cout<<i<<"x"<<j<<"="<<i*j<<endl;
	}
	cout<<endl;
}
}



int main(){
	int n1;
	cout<<"Enter your number for  table";
	cin>>n1;
	
	table(n1);
}
