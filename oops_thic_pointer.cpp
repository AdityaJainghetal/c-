#include <iostream>
using namespace std;

//this pointer


class Game{
	private:
		string category;
		string status;
		int id;
		
		
		public:
			Game(string category,string status,int id){
				this->category=category;
				this->status=status;
				this->id=id;
				
				//this pointer
//				this(self refernce)
//				obj2(obj1)
			
			Game(Game gm){
					this->category=gm.category;
				this->status=gm.status;
				this->id=gm.id;
			}
		void display(){
			cout<<"Object id: "<<id<<endl;
			cout<<"Category"<<category<<"Status"<<status<<endl;
		}
};


int main(){
	Game obj("team-mate","killed",101);
	obj.display;
//	Game obj1=obj;
//	Game obj2(obj1);
	}
