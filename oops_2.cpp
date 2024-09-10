#include <iostream>
using namespace std;

class Area{
	public:
		double radius;
//		double height;
		double area_circle;
		double parimeter_circle;
		
		
		void insert_data(){
			cout<<"Enter your radius of circle: ";
			cin>>radius;
			
		}
		
		void display_data(){
			double area_circle= (3.14)*radius*radius; 
			cout<<"area of circle: "<<area_circle<<endl;
			
				double parimeter_circle= 2*3.14*radius; 
			cout<<"area of parimeter: "<<parimeter_circle<<endl;
		}
		
//		void insert_data(){
//			cout<<"Enter your radius of circle: ";
//			cin>>radius;
//			
//		}
//		
//		void display_data(){
//			double parimeter_circle= 2*(3.14)*radius; 
//			cout<<area_parimeter<<endl;
//		}
		
		
			
};



int main(){
			Area sys1;
			sys1.insert_data();
			sys1.display_data();
//				sys2.insert_data();
//			sys2.display_data();
		
		}
