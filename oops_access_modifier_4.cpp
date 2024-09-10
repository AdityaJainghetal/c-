#include <iostream>
using namespace std;

	class Person{
		private:
			string name;
			int age;
			string country;
		
		public:
			Person(){
			name: "";
			age: 9;
			country :"";
			cout<<"constructor default \n";
		}
	
			void set_per(string n,int ag,string c){
				name=n;
				age=ag;
				country=c;
			}
			
			void get_per(){
				cout<<"Your name is: "<<name<<" "<<endl;
				cout<<"Your age is: "<<age<<" "<<endl;
				cout<<"Your country name is: "<<country<<endl;
			}
	};
	
	int main(){
		Person p1;
		p1.set_per("Ajay",18,"India");
		p1.get_per();
	
		
		
	
	}
