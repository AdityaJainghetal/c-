#include <iostream>
using namespace std;


class Student{
void add(){
	cout<<"addition";
}
	public:
	
	void operator +(Student formal){
		cout<<"operator redefine ";
		cout<<"operator overating";
	}
};

int main(){
	Student obj1,obj2;
	obj1+obj2;
}
