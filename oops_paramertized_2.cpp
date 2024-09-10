#include <iostream>
using namespace std;

class Area{
	public:
		double radius;
		double area_circle;
		double area_para;	
			
		Area(){
			radius=0;
			cout<<"constructor default \n";
		}
		
		Area(double ra){
			radius=ra;
			cout<<"paramerterized default \n";
		}
		
		void insert_data(){
			cout<<"Enter your radius: ";
			cin>>radius;
			
		}
		
		void display_data(){
			area_circle = 3.14*radius*radius;
			cout<<"Area of circle: "<<area_circle<<endl;
			area_para = 2*(3.14)*radius;
			cout<<"Area of parameter: "<<area_para<<endl;
		}
};



int main(){
	Area sys1;
	sys1.insert_data();
		sys1.display_data();
	Area sys2(5);

	sys2.display_data();
	
	
}
