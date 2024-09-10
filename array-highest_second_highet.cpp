#include <iostream>
using namespace std;

int main(){
	int marks[6]={45,6,4,89,72,91},high=marks[0],shigh=marks[1],thigh=marks[0];
	for(int i=0;i<6;i++){
	if(marks[i]>high){
		thigh=shigh;
		shigh=high;
		high=marks[i];
	}
	if(marks[i]>shigh && marks[i]<high){
		thigh=shigh;
		shigh=marks[i];
	}
	if(marks[i]>thigh && marks[i]<shigh){
		thigh=marks[i];
	}
	}
	
	cout<<"highest marks:"<<high<<endl;
	cout<<"second highest marks:"<<shigh<<endl;
	cout<<"third highest marks:"<<thigh<<endl;
}
