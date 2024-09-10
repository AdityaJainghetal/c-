#include <iostream>
using namespace std;

class Human{
	protected:
		string name;
		int age;
		
		public:
			
			Human(){
				
			};
			
			
			
			
			Human (string n, int a){
				name=n;
				age=a;
			}
			
			void display(){
				cout<<name<<" "<<age<<" \n";
			}
			
			void work(){
				cout<<"I am working \n";
			}

};



class Student: public Human{
	int roll_number;
	int fees;
	
	public:
		Student(string n,int a,int roll,int fe): Human(n,a)
		{
			roll_number=roll;
			fees=fe;
			
		}
		
		void display(){
			cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
		}
};

class Teacher: public Human{
	int salary;
	public:
		Teacher(int sal,string n,int a){
			sal=salary;
//			name=n;
			age=a;
		}
		
		void display(){
			cout<<name<<" "<<age<<" "<<" "<<salary<<endl;
		}
};

int main(){
	Student A1("Rohit",12,10,99);
	A1.display();
	Teacher A2(99,"Ajay",23);
	A2.display();
}
