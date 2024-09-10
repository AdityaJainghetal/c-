#include <iostream>
using namespace std;

int hcf(int n1, int n2){
	
int small =	(n1<n2) ? n1 : n2;
	int hcf=1;
	for(int i=small;i>=1;i--){
		if(n1%i==0 && n2%i==0){

			cout<<"it is hcf of this number: "<<i<<endl;
			break;
		}
	}
	   

}




int main(){
	int n1,n2;
	cout<<"Enter 2 number: ";
	cin>>n1>>n2;
	
	hcf(n1 , n2);

}
