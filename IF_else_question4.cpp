#include <iostream>
using namespace std;

int main(){
	float attend,total_class,per; //15basespoint also get decimal value
	cout<<"Enter your obtained attend_class: ";
	cin>>attend;
	cout<<"Enter your total attend_class: ";
	cin>>total_class;
	per = (attend/total_class)*100;
	cout<<"your percentage: "<<per<<endl;

	if(per>75){
	
			cout << "You can take the exam with " << per << "% attendance." << endl;
	}
		else{
			cout<<"you are not eligible"<<endl;
		}
}



