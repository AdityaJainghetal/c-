//write a program to create name time in which we 2data member hour 
//and minit and having the method?



#include <iostream>
using namespace std;
class Time{

	private:
	int hour , minit;
	
	public:
		Time(int h, int m){
			hour=h;
			minit=m;
			
		}
		void convert_into_main(){
			
			int temp=hour*60+minit;
			cout<<temp;
			
		}
		
};

int main(){
	Time obj1(2,30);
	obj1.convert_into_main();
}
