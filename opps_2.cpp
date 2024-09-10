#include <iostream>
using namespace std;

class Animal{
	public:
		string name,category;
		int no_legs;
		
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
}
