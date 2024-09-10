#include <iostream>
using namespace std;

//this pointer


class Game{
	private:
		string category;
		string status;
		int *id;
		
		
		public:
			Game(string category,string status,int id){
				this->category=category;
				this->status=status;
			this->id=new int;        //deap copy
				*(this->id)=id; //shallow copy
				//this pointer
//				this(self refernce)
//				obj2(obj1)
			
			Game(const Game &gm){
//				gm.category="Enmey";
					this->category=gm.category;
				this->status=gm.status;
				this->id=new int; 
				this->id=*gm.id;             //deap copy
			}
			
		void display(){
			cout<<"Object id: "<<*id<<endl;
			cout<<"Category"<<category<<"Status"<<status<<endl;
		}
};


int main(){
	Game obj1("team-mate","killed",101);
	obj1.display();
//	Game obj1=obj;
//	Game obj2(obj1);
	}
