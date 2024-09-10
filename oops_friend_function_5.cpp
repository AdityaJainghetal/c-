#include <iostream>
using namespace std;

class Bank{
	private:
		int balance;
		string name;
		static int count;	
		public:
			Bank(int bal,string nm){
			void display();
			static void number_customer();
			}
			
		Banke::Bank(int bal,string nm){
			balance=bal;
			name=nm;
			count++;
		}
		void Bank:: number_customer(){
	cout<<count;
}
};

 void Bank::display(){
 		cout<<"name"<<name<<"Balance"<<balance<<endl;
			}


int main(){
	Bank obj(40000,"Ajay"),obj2(4000,"ajay");
	obj.display();
	Bank::number_customer();
	}
