#include <iostream>
using namespace std;
int main(){
	
	int num,dino;
	try{
		cout<<"Enter your number: ";
		cin>>num;
		
		cout<<"Enter dino: ";
		cin>>dino;
		
		if(dino==0){
			throw dino;
		}
		cout<<"Division"<<num/(double)dino<<endl;
	}
	
	catch(int args){
		cout<<"Enter dino"<<args<<endl;
		cout<<"dino can't be  zero";
	}
}
