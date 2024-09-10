//diamond problem

#include <iostream>
using namespace std;

class GrantParent{
	public:
		int number;
		
};


class Parent1: virtual public GrantParent{
	public:Parent1(){
		cout<<"parent1\n";
	}

};

class Parent2: virtual public GrantParent{
	public:Parent2(){
		cout<<"parent2\n";
	}
		
};

class Child: public Parent1,public Parent2{
	
		
};

int main(){
	cout<<"GP: "<<sizeof(GrantParent)<<endl;
		cout<<"P1: "<<sizeof(Parent1)<<endl;
			cout<<"P2: "<<sizeof(Parent2)<<endl;
				cout<<"Child: "<<sizeof(Child)<<endl;
				
				Child obj;
				obj.number=90;
				obj.Parent1::number=190;
				obj.Parent2::number=20;
				
				cout<<obj.number<<endl;
				
}
