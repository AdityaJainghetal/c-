#include <iostream>
using namespace std;


class Employee{
	protected:
		int salary;
		int basic;
		int hra;
		int da;
		int pf;
		
		public:
			Employee(int ba,int h,int d,int p){
				basic=ba;
				hra=h;
				da=d;
				pf=p;
				salary=basic+hra+da-pf;
			}
			
			void display(){
		cout<<"my salary is: "<<salary<<endl;
		
		cout<<"Enter your basic: "<<basic<<endl;
	
		cout<<"Enter your hra: "<<hra<<endl;
		
		cout<<"Enter your da: "<<da<<endl;
		
		cout<<"Enter your pf: "<<	pf<<endl;
		 cout<<" total salary:"<<salary<<endl;
		
	}
				
};

		
int main(){


	int  basic, hra,da,pf;



		cout<<"Enter your basic: "<<endl;
		cin>>basic;
		cout<<"Enter your hra: "<<endl;
		cin>>hra;
		cout<<"Enter your da: "<<endl;
		cin>>da;
		cout<<"Enter your pf :"<<endl;
		cin>>pf;

	   Employee obj(basic, hra, da, pf);

   
    obj.display();
}			
		
