//syntax:
//	data_type * pointer_name;  //decleartion

#include <iostream>
using namespace std;

int main(){
	int number=90;
	double marks=34.65;
	char choice='T';
	
	int *p1= &number;  //& ampersand (address of)
	double *p2= &marks;  //* asterick (indirection,dereference)
	
//	cout<<sizeof(p1)<<" "<<sizeof(p2)<<endl;

	cout<<"address of number: "<<&number<<" or "<<p1 <<endl;
	//deference
	*p1=*p1+10;
		cout<<"data of number: "<<number<<" "<<*p1<<endl;
}	

