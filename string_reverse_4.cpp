#include <iostream>
using namespace std;

int main(){
	string name="Aditya";
	int start=0, end=name.size()-1;
	cout<<"original str : "<<name<<endl;
	
	while(start<end){
		swap(name[start],name[end]);
		start++, end--;
	}
	cout<<"Reverse str: "<<name;
}
