#include <iostream>
using namespace std;

class Employee{
	public:
		void prepare_salary(){
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
//	Executive exe1;
//	exe1.prepare_salary();
//	exe1.promotion();
	
	
	
//	---------------
	Executive *ptr1 = new Executive;
	ptr1->prepare_salary();
	ptr1->promotion();
	}


