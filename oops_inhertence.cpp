#include <iostream>
using namespace std;

class Parent{
	private:
		void f1(){
			cout<<"this is  private function f1 of class Parent\n";
		}
		
			protected:
		void f2(){
			cout<<"this is  protected function f1 of class Parent\n";
		}
		
			public:
		void f3(){
			cout<<"this is  public function f1 of class Parent\n";
		}
};

class Child : public Parent{
	public:
		void f4(){
			f2();
		}
};

int main(){
	Child obj;
	obj.f4();
}
