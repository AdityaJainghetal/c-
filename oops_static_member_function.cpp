#include <iostream>
using namespace std;

class Customer{
	string name;
	int account_number,balance;

	
	public:	
	static int total_customer;
		Customer(string name,int account_number,int balance){
			this->name=name;
			this->account_number=account_number;
			this->balance=balance;
			total_customer++;
		}	
		
		static void acceStatic(){
			cout<<total_customer<<endl;
		}
		
		
		void display(){
			cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
		}
		
		
		void display_total(){
			cout<<total_customer<<endl;
		}
		
		
};


int Customer::total_customer=0;

int main(){
	Customer A1("Rohit",1,1000);
	Customer A2("Ajay",2,1000);
	Customer::acceStatic();
	A1.display();
	
	
}
