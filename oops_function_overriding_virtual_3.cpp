#include <iostream>
using namespace std;

class Employee{
	public:
	virtual	void prepare_salary(){
			cout<<"Salary prepare employee\n";
		}
		
		void promotion(){
			cout<<"if employee year->4 -->promotion\n";
		}
};

class Executive: public Employee{
	public:
		void prepare_salary(){
			cout<<"Salary prepare executive + salary +perks+shares+houss..>\n";
		}
};



int main(){
	Employee *ptrobj;   //base pointer
	Executive obj;
	ptrobj=&obj;          //Executive object
	
	
	
	//Exmployee *ptrobj = new Executive
	ptrobj->prepare_salary();
	ptrobj->promotion();
}

