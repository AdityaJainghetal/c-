#include <iostream>
using namespace std;

class Parent1{
	public:
		int data;
		void f1(){
			cout<<"This is a function f1 of  class Parents 1\n";
		}
};

class Parent2{
	public:
		int data;
		void f1(){
			cout<<"this is a function f1 of class Parent2\n";
			
		}
};

class Child: public Parent1, public Parent2{
	
};

int main(){
	Child obj;
	obj.data=90;
	return 0;
}


