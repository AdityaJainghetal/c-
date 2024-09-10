#include <iostream>
using namespace std;

class Circle{
	public:
	
	double radius;
	double area_circle;
	public:
		void Circle(double r,double are_cir){
			radius=r;
			area_circle=are_cir;
			
		}
		
		void display(){
			cout<<"Enter your radius: "<<radius<<endl;
			area_circle=3.14*radius;
			cout<<"your area of circle: "<<area_circle<<endl;
				
		}
};

int main(){
	Circle obj;
	obj.Circle(4);
	obj.display();
}
