
//static variable,static function is oops-
//				it is a special variabl whose memory is allocation
//				is done at static area of memory.
//				for all object only one static variable is created.


//				code->
//					global
			
//			task:
//				static variable and static function without oops.


#include <iostream>
using namespace std;


class Cybrom{
	public:
		int enroll;
		string student_name;
		static string institute_name;
		
		public:
			Cybrom(int enr,string name){
				enroll=enr;
				student_name=name;
			}
			
			
			void display(){
				cout<<"Student Name:"<<student_name<<endl;
				cout<<"institute Name: "<<institute_name<<endl;
				cout<<"Student Enroll: "<<enroll<<endl;
			}
		};

string Cybrom::institute_name="Cybrom";
			
int main(){
	Cybrom obj1(1022,"aditya"),obj2(10355,"jain");
	obj1.display();
	obj2.display();
	//
 //unhealty    	obj1.istitute_name="Cybrom infotech";
	//
	Cybrom::institute_name="Cybrom infotech";
	obj1.display();
	obj2.display();
}

