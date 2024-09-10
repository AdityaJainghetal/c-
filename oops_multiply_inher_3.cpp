#include <iostream>
using namespace std;

class Engineer{
	public:
		string specilization;
		
			Engineer(){
			cout<<"hello Engineer\n";
		}
		
		void work(){
			cout<<"I have specilization in"<<specilization<<endl;
		}
};

class Youtuber{
	public:
		int subscribers;
		
		Youtuber(){
			cout<<"hello Youtuber\n";
		}
			
			void contentcreator(){
				cout<<"I have a subsciber base of "<<subscribers<<endl;
			}
};

class CodeTeacher: public Engineer, public Youtuber{
	public:
		string name;
		
		CodeTeacher(){
			cout<<"hello Coder\n";
		}
//		string specilization;
//		int subscribers;
		
		CodeTeacher(string n,string spec, int sub){
			name=n;
			specilization =spec;
			subscribers=sub;
		}
		
		void showcase(){
			cout<<"My name is "<<name<<endl;
			work();
			contentcreator();
		}
};


int main(){
	CodeTeacher A1;
	
}
