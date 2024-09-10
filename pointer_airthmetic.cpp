//pointer airthmetic



#include <iostream>
using namespace std;

int main(){
	int number1 =90,number2=80;
	int *ptr1=&number1,*ptr2=&number2;
	cout<<"Address of number1 :"<<ptr1<<endl;
	cout<<"Address of number2 : "<<ptr2<<endl;
	
	ptr2=ptr2+1;
	
	
	cout<<"Address of number1 :"<<ptr1<<endl;
	cout<<"Address of number2 : "<<ptr2<<endl;
	cout<<"Add of both: "<<*ptr1+*ptr2<<endl;


ptr1=ptr1-1;
cout<<"sub: "<<ptr1<<endl;
	cout<<"Add of both: "<<*ptr2-*ptr1<<endl;
		
}
