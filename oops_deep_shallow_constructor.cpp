#include <iostream>
using namespace std;

class Game{
	private:
		string category;
		string status;
		int *id;
		
		public:
			Game(string categroy,string status,int id){
				this->category=category;
				this->status=status;
				this->id=new int;
				*(this->id)=id;      //parameterized constructor
			}
			
		Game( const Game &obj){
			this->category=obj.category;
			this->status=obj.status;
			//this->id=obj.id;   //  shallow 
			  this->id      =new int;
			*(this->id)=*obj.id;   //deep constructor
		}
		
		void change_id(int identity){
			*id=identity;
		}
		
		void display(){
			cout<<"object id: "<<*id<<endl;
			cout<<"Category: "<<category<<"status: "<<status<<endl;
		}
};

int main(){
	Game obj1("Team-mate","killed",101);
	Game obj2(obj1);
	obj1.display();
	obj2.display();
	obj2.change_id(102);
	obj1.display();
	obj2.display();
	//obj2-->calling copy constructor
	//obj1-->parameter;
}