#include <iostream>
using namespace std;

int main(){
	


	for(int i=0;i<=7;i++){
		for(int j=0;j<=7;j++){
			if(i==0 || j==0 || i==7 || j==0 || i==4 ){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
			
		
		}
		cout<<endl;
	}
	
	
}
