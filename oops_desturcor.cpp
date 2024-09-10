//Destructor function->
			 
//1.  It is a special member function,which can deallocate the resorce
//			 allocate by object
			 
//			 resource-->memory,file handler.


//2.  it can't be overloaded.
//3. name same as class name preceded by 
//	~ (tilde)
//4. if we can't mention in our code,then complier create it for you
//5. Destuctor can be virtual.




//order		

#include <iostream>
using namespace std;

class Parent{
	public:
		Parent(){
			cout<<"Parent constructor\n";
			
		}
		
		virtual ~Parent(){
			cout<<"Parent distructor: ";
		}
};


class Child:public Parent{
	public:
		Child(){
					cout<<"Child constructor\n";
			
		}
		
		~Child(){
			cout<<"Child distructor: ";
		}
		
};



class GrantChild:public Child{
	public:
		GrantChild(){
					cout<<"GrantChild constructor\n";
			
		}
		
		~GrantChild(){
			cout<<"GrantChild distructor: ";
		}
		
};


int main(){
	Parent * basepointer = new GrantChild;
	delete basepointer;

}
