#include <iostream>
using namespace std;


int main(){

int num;
cout<<"Enter your number: ";
cin>>num;

for(int i=num;i>=1;i--){
	if(i%5==0){
		continue;
	}
	cout<<i<<endl;

}

	
}
