#include <iostream>
using namespace std;

class Car{
	protected:
		string company;
		double model;
		int year;
		
		
	public:
		Car(){
		company="";
		model=0;
		year=0;
		}
	
		void set_Ca(string com, double mod,int y){
			company=com;
			model=mod;
			year=y;
			
		}	
		
		void get_Ca(){
			cout<<"Your company name is: "<<company<<endl;
			cout<<"Your model is: "<<model<<endl;
			cout<<"Your year is: "<<year<<endl;
		}
		};
		
		int main(){
			Car c1;
			c1.set_Ca("mahindra Thar",234,2024);
			c1.get_Ca();
		}
	
		

