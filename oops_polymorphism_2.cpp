#include <iostream>
using namespace std;

class ConcatenateAdd{
	public:
		
//		void add(int num1,int num2)
	


void add(int num1 ,int num2){
	cout<<"with int,int \n";
	cout<<"Addition: "<<num1+num2<<endl;
}

void add(string s1,string s2){
	cout<<"Add: "<<s1+s2<<endl;
}


};

int main(){
	ConcatenateAdd obj;
	obj.add(2,3);
	obj.add("function","overloading");
}
