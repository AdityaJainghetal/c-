#include <iostream>
using namespace std;


class Person{

	private:
		string name;
		int age;
		string country;
	
	public:
//		Person(string n, int a, string c){
//		name=n;
//		age=a;
//		country=c;
//		}
		
	void set_Per(string n, int a, string c){
		name=n;
		age=a;
		country=c;
}
		
		void get_Per(){
			cout<<"Enter your name: "<<name<<endl;
			cout<<"Enter your age: "<<age<<endl;
			cout<<"Enter your country :"<<country<<endl;
		}
};
		
		int main(){
//			Person obj("Ajay",65,"Bag");
			Person p1;
			p1.set_Per("Ajay",65,"Bag");
			p1.get_Per();
//			obj.get_Per();
		}
		

