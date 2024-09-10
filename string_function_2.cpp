#include <iostream>
using namespace std;


int main(){
	string f1="";
	
	for(int i=1;i<=20;i++){
		f1.push_back('a');
		cout<<"size :"<<f1.size()<<"capacity :"<<f1.capacity()<<endl;
	}
	
	cout<<f1;
}
