#include <iostream>
using namespace std;

class Rectangle{
	private:
		int *len;
		int *bre;
		public:
		Rectangle(int l,int b){
			len=new int;
			*len=l;
			bre= new int;
			*bre=b;
		}
		
		Rectangle(const Rectangle &temp){
			len=new int;
			bre=new int;
			*len=*temp.len;
			*bre=*temp.bre;
			
		}
		void changedimenstion(int a,int b){
			*len=a;
			*bre=b;
		}
		void display(){
			cout<<"length"<<*len<<"breath"<<*bre<<endl;
		}
};

int main(){
	Rectangle obj1(12,45);
	obj1.display();
	Rectangle obj2(obj1);
	obj2.display();
	obj1.changedimenstion(121,333);
	obj1.display();
}
