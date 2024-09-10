#include <iostream>
using namespace std;

class Human{
	public:
		string name;
		
		void display(){
			cout<<"My name is: "<<name<<endl;
		}
};


class Engineer:public virtual Human{
	
	public:
		string specilization;
		
			Engineer(){
			cout<<"hello Engineer\n";
		}
		
		void work(){
			cout<<"I have specilization in"<<specilization<<endl;
		}
};

class Youtuber: public virtual Human{
	public:
		int subscribers;
			
			void contentcreator(){
				cout<<"I have a subsciber base of "<<subscribers<<endl;
			}
};

class CodeTeacher: public Youtuber, public Engineer{
	public:
		int salary;
	
		CodeTeacher(string name,string specilization, int subsciber,int salary){
			this->name=name;
			this->specilization =specilization;
			this->subscribers=subscribers;
			this->salary=salary;
		}
		
//		void showcase(){
//			cout<<"My name is "<<name<<endl;
//			work();
//			contentcreator();
//		}

	void display(){
		cout<<"my name is: "<<name<<endl;
		cout<<"my speecilization: "<<specilization<<endl;
		cout<<"my subscribers: "<<subscribers<<endl;
		cout<<"salary: "<<salary<<endl;
	}
};


int main(){
	CodeTeacher A1("Rohit","CSE",99000,9900000);
	A1.display();
	
}
