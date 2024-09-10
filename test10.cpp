

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter your number: ";
	cin>>num;
	
	switch(num%2==0){
		case 1:cout<<"even\n";
		       break;
			
		case 0: cout<<"odd\n";
		      break;
	}
	
	for(int i=1;i<=10;i++){
		  cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	}



}

		
	

