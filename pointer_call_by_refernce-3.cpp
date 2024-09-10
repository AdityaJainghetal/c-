#include <iostream>
using namespace std;

void increment_10(int *n1 ,int *n2, int *n3){
		if(*n1<*n2 && *n3<*n2 ){
//	;
		*n2=0;
		
	}
	
	else if(*n3<*n1 && *n2<*n1 ){
	
		*n1=0;
		
	}
	
	else if(*n1<*n3 && *n2<*n3 ){
	
		*n3=0;
		
	}
}


int main(){
	int n1,n2,n3;
	cout<<"enter 3 number: ";
	cin>>n1>>n2>>n3;
	increment_10(&n1 ,&n2, &n3);
	cout<<n1<<" "<<n2<<" "<<n3;
}
