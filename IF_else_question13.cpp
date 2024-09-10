#include <iostream>
using namespace std;

int main(){
	int maths,physics,chem;
	cout<<"Enter your maths,physics,chem: ";
	cin>>maths>>physics>>chem;
	float avg = (maths+physics+chem);
	
	if(avg>190){
		cout<<"you are eligible: "<<avg<<endl;		
	}
	else{
		cout<<"you are not eligible: "<<avg<<endl;
	}
}
