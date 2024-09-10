#include <iostream>
using namespace std;

class Animal{
	public:
			string name,category;
		int no_legs;
		
		
		Animal(){
			name: "";
			category: "";
			no_legs:0;
			cout<<"constructor default \n";
		}
		
		Animal(string n,string c,int leg){
			name=n;
			category=c;
			no_legs=leg;
				cout<<"paramerterized default \n";
		}
		
		
		void insert_data(){
			cout<<"Enter your animal name and category: ";
			cin>>name>>category;
			cout<<"Enter your animal legs:";
			cin>>no_legs;
			
		}
		
		
		
		void display_data(){
			cout<<"your animal name is : "<<name<<endl;
			cout<<"your animal category is : "<<category<<endl;
			cout<<"your animal legs is :"<<no_legs<<endl;
		}
};


int main(){
	Animal sys1;
	sys1.insert_data();
	sys1.display_data();
	Animal sys2("lion","omnivores",4);
	sys2.display_data();
}
