//write a program to find the highest and second highest in an array?

#include <iostream>
using namespace std;

int main(){
	int marks[6]={45,6,34,89,32,11};
//	int highest=marks[0]; //45
	int lowest=marks[0];
	
	for(int i=1;i<6;i++){
		if(marks[i]<lowest){
			lowest=marks[i];
		}
	}
	cout<<"lowest marks:"<<lowest<<endl;
}
