#include <iostream>
using namespace std;

bool prime(int num){
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			return false;
		}
		
	}
	return true;
}



int main(){
	int a,b;
	cout<<"enter your range: ";
	cin>>a>>b;
	
	for(int i=a;i<=b;i++){
		if(prime(i)){
			cout<<i<<"prime number"<<endl;
		}

}
	return 0;
}
