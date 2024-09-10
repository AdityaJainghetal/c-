//wap to create class univercity having data member
//univercity_name,address,session,number_of_streams?
//number_of_college_affilated?


//number function
//paremeteriezed construction
//setter(),getter()


//create a child class college having attribute
//data_memeber: college_name,address,number_of_student

//create a child class student having attribute
//data_memeber: student_name,address,




#include <iostream>
using namespace std;

class Univercity{
	protected:
		string univercity_name,address;
		int session;
		int number_of_stream;
		
	public:
		Univercity(string un,string add,int s,int no_s){
			univercity_name=un;
			address=add;
			session=s;
			number_of_stream=no_s;
			cout<<"Univercity";
			
		}
};

class College:public Univercity{
	protected:
		string college_name;
		int number_of_student;
		
		
		public:
				College(string un,string add,int s,int no_s,string cn, int num_sum):
					Univercity( un, add,s,no_s)
				{
					college_name=cn;
					number_of_student=num_sum;
					cout<<"College/n";
		}
};

class Student: public College{
	private:
		string student_name;
		int contact;
		
		public:
			Student(string un,string add,int s,int no_s,string cn,int no_sum,string st_name,int cont):
					College(un, add, s,no_s, cn,no_sum){
						student_name=st_name;
						contact=cont;
						cout<<"Student\n";
					}
					
			void display(){
				cout<<"Enter your Univercity name: "<<univercity_name<<endl;
//				cin>>univercity_name;
				cout<<"Enter your address: "<<address<<endl;
//				cin>>address;
				cout<<"Enter your number of stream: "<<number_of_stream<<endl;
//				cin>>number_of_stream;
				cout<<"Enter your college name: "<<college_name<<endl;
//				cin>>college_name;
				cout<<"Enter your number of student : "<<number_of_student<<endl;
//				cin>>number_of_student;
				cout<<"Enter your student name: "<<student_name<<endl;
//				cin>>student_name;
				cout<<"Enter your contact"<<contact<<endl;
//				cin>>contact;
				
				
			}
		
		
};

int main(){
	Student obj("RGPV","MERA GHAR KE PICHA",5,21,"BANSAL",8222,"AJAY",2321321213);
	obj.display();
}
