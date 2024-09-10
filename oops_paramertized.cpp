#include <iostream>
using namespace std;

class System{
	public:
		string name,category;
		int hard_disk;
		int ram;
		
		
		System(){  //defult constructor  
			name="";
			category="";
			hard_disk=0;
			ram=0;
		//	cout<<"constructor default \n";
		}
		
		System(string n,string c,int hd,int rm){
			name=n;
			category=c;
			hard_disk=hd;
			ram=rm;
		//	cout<<"paramerterized default \n";
		}
		
		
		
		void insert_data(){
			cout<<"Enter name and category of the system: ";
			cin>>name>>category;
			cout<<"mention it HD and RAM: ";
			cin>>hard_disk>>ram;
		}
		
		void display_data(){
			cout<<"Name: "<<name<<"Category: "<<category<<endl;
			cout<<"RAM: "<<ram<<"hard disk: "<<hard_disk<<endl;
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
			System sys1;
			sys1.insert_data();
			
			System sys2("lenovo","laptop",16,1);
			sys1.display_data();
			sys2.display_data();
		//	sys1.display_data();
			
		}
		
		

