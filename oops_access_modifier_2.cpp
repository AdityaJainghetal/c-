#include <iostream>
using namespace std;

class Circle{
	
	private:
		double radius;
	
	public:

      
        void set_rad(double rad) {
            radius = rad;
        }
		
		void get_rad(){
			cout<<"Radius"<<radius;
			cout<<"Area of circle: "<<(3.14)*radius*radius<<endl;
			cout<<"Parameter of circle: "<<2 * (3.14) * radius<<endl;
		}
};

int main(){
	Circle c1;
	c1.set_rad(15);
	c1.get_rad();
	
}
		
		
