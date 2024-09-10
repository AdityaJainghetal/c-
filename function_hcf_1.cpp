#include <iostream>
using namespace std;

int hcf(){
	int n1,n2;
	cout<<"Enter two number: ";
	cin>>n1>>n2;
	
int small =	(n1<n2) ? n1 : n2;
	int hcf=1;
	for(int i=small;i>=1;i--){
		if(n1%i==0 && n2%i==0){
			hcf=i;
//			cout<<"it is hcf of this number: "<<i<<endl;
			break;
		}
	}
	   return hcf;

}




int main(){
	int result = hcf();
	cout<<"hcf of this number:"<<result<<endl;
		
}
