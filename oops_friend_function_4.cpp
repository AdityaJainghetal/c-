//#friend function and friend 


//it can take access of private , protected
//member of any class in which we declare it
//as a friend.

#include <iostream>
using namespace std;

class Bank{
	private:
		int balance;
		string name;
		static int count;	
		public:
			Bank(int bal,string nm){
			balance=bal;
			name=nm;
			count++;
			}
			
			
			void display();
			
			
   
//		friend class PhonePe;
//	friend void f1(Bank &obj);
static void number_customer(){
	cout<<count;
}
};

int Bank::count=0;
 void Bank::display(){
 		cout<<"name"<<name<<"Balance"<<balance<<endl;
			}


int main(){
	Bank obj(40000,"Ajay"),obj2(4000,"ajay");
	obj.display();
	Bank::number_customer();
	}
