#include <iostream>
using namespace std;

class Employee{
	private:
		int eid;
	public:
		void set_id(int id){
		
		eid=id;
	}
	
	void get_id(){
		cout<<eid;
	}
};

int main(){
	Employee e1;
	e1.set_id(1011);
	e1.get_id();
}
