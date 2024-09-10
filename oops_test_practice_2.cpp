#include <iostream>
using namespace std;


int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};



class Data{
	private:
		int Day;
		int month;
		int year;
		static int todayday,todaymonth,todayyear;
	
	public:
		Data(int d,int m,int y){
			Day=d;
			month=m;
			year=y;
		}
		
		void display(){
			cout<<"today date: "<<Day<<"/"<<month<<"/"<<year;
		}
		
		void todaydate(){
			cout<<"today date: "<<todayday<<"/"<<todaymonth<<"/"<<todayyear;
		}
		
		void remainder(){
			if(year<todayyear){
				cout<<"invalid date";
			}
		}
};


int Data::todayday=2;
int  Data::todaymonth=9;
int Data::todayyear=2024;

int main(){
	int Day,month,year;
	cout<<"Enter your date of birth: ";
	cin>>Day>>month>>year;
	
	Data obj(Day,month,year);
	obj.display();
	obj.todaydate();
	obj.remainder();
}
