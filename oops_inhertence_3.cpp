
//wap to create class univercity having data member
//univercity_name,address,session,number_of_streams?
//number_of_college_affilated?


//number function
//paremeteriezed construction
//setter(),getter()


//create a child class college having attribute
//data_memeber: college_name,address,number_of_student

//create a child class college having attribute
//data_memeber: student_name,address,



#include <iostream>
using namespace std;

//calling base class constructor in drived class

class Univercity{
	protected:
		string univercity_name;
		int number_of_college_affilated;
		
	public:
		Univercity(string un,int numC){
			univercity_name=un;
			number_of_college_affilated=numC;
			cout<<"Univercity";
		}
};

class College :public Univercity{
	protected:
		string college_name;
		public:
			College(string un,int numC,string CN):Univercity(un,numC){
				college_name=CN;
				cout<<"College\n";
			}
};

class Student : public College{
	private:
		string student_name;
		public:
			Student (string un,int numC, string CN,string name):
				College(un,numC,CN){
				
				
				student_name=name;
				cout<<"Student\n";
			}
				void display(){
					cout<<"Univercity Name: "<<univercity_name<<endl;
					cout<<"Number of College affilated: "<<number_of_college_affilated<<endl;
					cout<<"College Name: "<<college_name<<endl;
					cout<<"Student Name: "<<student_name<<endl;
					
				}
			
};


int main(){
	Student obj("RGPV",10000,"BANSAL","AJAY");
	obj.display();
}
