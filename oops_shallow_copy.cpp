#include <iostream>
using namespace std;

class Rectangle{
	private:
		int len, bre;
		public:
			Rectangle(int l, int b){
				len =l;
				bre=b;
			}
			Rectangle (const Rectangle &temp){
				len=temp.len;
				bre=temp.bre;
			}
			
			void display(){
				cout<<"length"<<this->len<<"breath"<<this->bre<<endl;
			}
};

int main(){
	Rectangle obj1(12 ,34);
	obj1.display();
	Rectangle obj2(obj1);
	obj2.display();
}
