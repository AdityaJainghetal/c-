//initializer list

//1. parent constructure call
//2. execution fast(initialized own data member)
//3. initialized constant data memeber of own class
//4. for  initialized refernce variable data memeber of own class



//declare value 

//const
//refernce





#include <iostream>
using namespace std;

class Game{
	public:
		string category;
		
		Game(string cat){
			category=cat;
		}
		
		void display(){
			cout<<"this is "<<category<<endl;
		}
	
};
int main(){
	Game obj("team mate bot player"),obj2("enemy");
	obj.display();
	obj2.display();
	Game obj3=obj;
	Game obj4=obj;
	obj3.display();
	obj4.display();
	
	Game obj5(obj2);
}
