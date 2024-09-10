//do-while

//exit control loop
//condition dependent

//imp-> minimum 1 time execution
//menu driven program
//choice based


//while

//entry
//condition dependent

//minimum 0 time execution


//write a program to create a calculator using do-while loop?

//do{
//	
//}while(condition)
//


#include <iostream>
using namespace std;

int main(){
	int n1,n2;
	char ch;
	
	
	do{
		cout<<"Enter the respective symbols for performing opertion\n";
		cout<<"+ for addition/n- for substraction\n* for multipliction\n";
		cout<<"/ for division\n e for exit\n Enter your choice: ";
		cin>>ch;
		
		if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
		cout<<"Enter n1 and n2: ";
		cin>>n1>>n2;
		}
		
		
	
		switch(ch){
			case '+' : cout<<"Add :"<<n1+n2<<endl;
			break;
			
			case '-' : cout<<"Subtract :"<<n1-n2<<endl;
			break;
			case '*' : cout<<"Multily :"<<n1*n2<<endl;
			break;
			case '/' : cout<<"Division :"<<(float)n1/n2<<endl;
			break;
			case 'e' : cout<<"Thank u for using our service"<<endl;
			break;
			default:cout<<"invalid choice"<<endl;
		}
		
		
		
	}while(ch!='e');
}






























