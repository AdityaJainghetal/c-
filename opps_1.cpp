#include <iostream>
using namespace std;

class System{
	public:
		string name,category;
		int hard_disk;
		int ram;
		
		
		void insert_data(){
			cout<<"Enter name and category of the system: ";
			cin>>name>>category;
			cout<<"mention it HD and RAM";
			cin>>hard_disk>>ram;
		}
		
		void display_data(){
			cout<<"Name"<<name<<"Category: "<<category<<endl;
			cout<<"RAM"<<ram<<"hard disk"<<hard_disk<<endl;
		}
		
		void input(){
			cout<<name<<"system take some input\n";
			
		}
		
		void process(){
			cout<<name<<"system starts processing\n";
			
		}
		
		void output(){
			cout<<name<<"system generates some output\n";
		}
		
	};
		int main(){
			System sys1,sys2;
			sys1.insert_data();
			sys2.display_data();
			sys1.input();
			sys1.process();
			sys1.output();
		}
		
		

