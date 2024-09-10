#include <iostream>
using namespace std;


class Account{
	public:
		string bank_name;
		int ifce_code;
		string branch;
};

class Deposit:public Account{
	public:
		int deposit_money;
		int withdraw_money;
		
		Deposit(string ba_name,int if_code,string brch){
			bank_name=ba_name;
			if_code=if_code;
			branch=brch;
		}
};


class SavingAccount:public Deposit{
	public:
		int save_acc;
		
		SavingAccount(string ba_name,int if_code,string brch,int sa_acc):Deposit(ba_name,if_code,brch){
			int save_acc=sa_acc;
			
		}
		
		
  void display() {
    
        cout << "Bank name: " <<bank_name << endl;
        cout << "IFCE code: " << ifce_code << endl;
        cout << "Branch Name: " <<branch << endl;
        cout << "Deposit money: " <<deposit_money << endl;
        cout << "Withdraw money: " <<withdraw_money << endl;
        
    }
};


int main() {
    SavingAccount A1("HDFC",6700,"BHOPAL",7700);
    A1.display();

    
}

