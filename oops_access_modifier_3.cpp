#include <iostream>
using namespace std;

class Rectangle{
	
	private:
		double length;
		double width;
	
	public:
        void set_rec(double len,double wid) {
            length = len;
            width = wid;
        }
		
		void get_rec(){
			cout<<"length and width"<<length<<" "<<width<<endl;
			cout<<"area of rectangle: "<<length*width<<endl;
			cout<<"Parameter of rectangle: "<<2*(length+width)<<endl;
		}
};

int main(){
	Rectangle r1,r2;
	r1.set_rec(15,3);
	r1.get_rec();
	r2.set_rec(34,2);
	r2.get_rec();
	
}
		
		
