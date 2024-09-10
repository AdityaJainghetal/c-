#include <iostream>
using namespace std;

class GrantParent{
	public:
		int data;
		void f1(){
			cout<<"this is a funtion f1 of class Grant parent 1\n";
		}
};

class Parent1 : virtual public GrantParent{
	public:
		void f2(){
				cout<<"this is a funtion f1 of class  parent 1\n";
		}
};

class Parent2 : public GrantParent{
	public:
		void f3(){
				cout<<"this is a funtion f1 of class  parent 2\n";
		}
};

class Child: Parent1, public Parent2{
	public:
		int data;
		void f1(){
			cout<<"This is fun f1 of class parent\n";
		}
};


int main(){
	Child obj;
	obj.data=90;
	obj.f1();
}

