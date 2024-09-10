#include <iostream>
using namespace std;


class Student{
void add(){
	cout<<"addition";
}
	public:
	
	void operator +(){
		cout<<"operator redefine";
		cout<<"operator overating";
	}
};

int main(){
	Student obj;
	obj.operator+();
}
