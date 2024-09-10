//write a program to class name , employee having data member eid ename,edob,edepartment,esalary?
//and having method 

//		parameter constucuter
//		display data
//		create salary
//		filter records

#include <iostream>
using namespace std;


class Employee{
	public:
		int eid;
		string ename,dob,department;
		double salary;
		
	Employee(int id,string name,string date,string dep,double sal){
		eid=id;
		ename=name;
		dob=date;
		department=dep;
		salary=sal;
	}
	
	void display(){
		cout<<"Employee id"<<eid<<"Employee name :"<<ename<<endl;
		cout<<"Date :"<<dob<<"Department: "<<department<<endl;
		cout<<"Salary"<<salary<<endl;
	}
		
};





int main(){
	Employee *objptr = new Employee(101,"ajay","12/12","IT",90000);
	objptr->display(); //In pointer heap to display data use arrow function
}
