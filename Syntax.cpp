# include <iostream>
using namespace std;

//1. Age
//2. nationality
 
//syntax
//===========
//a ? b : c ;
//
//a-> boolean experssion
//b-> statement execute ,a result true
//c-> statement execute ,a result false

int main(){
	int age;
	char choice;
	
	cout<<"Enter your age:";
	cin>>age;//12
	cout<<"Are you indian type 'y' or 'n' ?????";
	cin>>choice;//y
	
	age>=18 && choice=='y' ? cout<<"u r eligible":cout<<"u r not eligible";
	
}
