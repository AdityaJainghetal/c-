#include <iostream>
using namespace std;

int main(){
	int marks[6]={45,6,4,89,62,11},high,shigh;
	if (marks[0]>marks[1]){
		high=marks[0]; //89
		shigh=marks[1]; //45
	}
	
//	else{
//		high=marks[1];
//		shigh=marks[0];
//	}
	
	for(int i=2;i<6;i++){
		if(marks[i]>high){
			shigh=high;
			high=marks[i];
		}
	}
	
	cout<<"highest marks:"<<high<<endl;
	cout<<"second highest marks:"<<shigh<<endl;
	
}
