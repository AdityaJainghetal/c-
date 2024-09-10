//wap to determine call by value and call by refernce,by creating two value?

//return = void 


#include <iostream>
using namespace std;

void great_zero(int &n1,int &n2, int &n3){
	if(n1<n2 && n3<n2 ){
//	;
		n2=0;
		
	}
	
	else if(n3<n1 && n2<n1 ){
	
		n1=0;
		
	}
	
	else if(n1<n3 && n2<n3 ){
	
		n3=0;
		
	}
}



int main(){
	int n1,n2,n3;
	cout<<"Enter your three number: ";
	cin>>n1>>n2>>n3;
	great_zero(n1,n2,n3);
	cout<<"result"<<n1<<" "<<n2<<" "<<n3<<endl;
}
