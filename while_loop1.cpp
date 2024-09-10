#include <iostream>
using namespace std;

int main(){
	double n1,n2;
	string choice="yes";
	
	while(choice=="yes"){
		cout<<"enter 2 number: ";
		cin>>n1>>n2;
		cout<<"Addition: "<<n1+n2<<endl;
		cout<<"do u want to continue type 'yes' for proceed ,otherwise type any character:";
		cin>>choice;
		
		if(choice=="yes"){
			cout<<"ok u can proceed/n";
			
		} 
		else{
			cout<<"thank u for using our service";
		}
	}
}
