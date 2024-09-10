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
		
		public:
			Bank(int bal,string nm){
			balance=bal;
			name=nm;
			
			}
			
			
			void display(){
				cout<<"name"<<name<<"Balance"<<balance<<endl;
			}
		
   
		friend class PhonePe;
	friend void f1(Bank &obj);

};



class Phonepe{
	public:
		void deposite(Bank &obj,int amount){
			obj.balance=obj.balance +amount;
		}
		
		
		
			void withdraw(Bank &obj,int amount){
			obj.balance=obj.balance -amount;
		}
};

void f1(Bank &obj){
	cout<<obj.name();
}


int main(){
	Bank obj(40000,"Ajay");
	obj.display();
	Phonepe obj_phonepe;
	obj_phonepe.deposite(obj,8000);
	obj.display();
	
	}
