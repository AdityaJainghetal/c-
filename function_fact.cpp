#include <iostream>
using namespace std;

void fact(int num){
	int fact=1;
	for(int i=num;i>=1;i--){
	fact=fact*i;		
	}
	cout<<"factorial: "<<" "<<"is: "<<" "<<fact<<endl;
	
};

int main(){
	int number;
	cout<<"Enter number: ";
	cin>>number;
	fact(number);
}
