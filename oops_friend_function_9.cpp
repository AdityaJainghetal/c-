#include <iostream>
using namespace std;

	class Airline{
		private:
			int flight_number;
			string departure_city;
			string destination;
			string departure_time;
			double price;
			
			public:
				Airline(int f, string dc, string des,string des_time, double p);
				void display();
				void updatetime(string time){
					departure_time=time;
				}
//				friend class Passenger;
	};
	
	
	Airline::Airline(int f,string dc, string des,string des_time,double p){
		flight_number=f;
		departure_city=dc;
		destination=des;
		departure_time=des_time;
		price=p;
		
	}
	
	void Airline::display(){
		cout<<flight_number<<endl;
		cout<<departure_city<<endl;
		cout<<destination<<endl;
		cout<<departure_time<<endl;
		
		cout<<price<<endl;
		
	}
	
	

int main(){
	Airline obj(13000,"airline","3.00","indore",45000);
	obj.display();
	obj.updatetime("4:00");
	obj.display();
}
