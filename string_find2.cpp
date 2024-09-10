//find the syntax

//find(char,optional=start)
////write a program to find out all the indexs(indices) of particular charcater by user?

#include <iostream>
using namespace std;

int main(){
	string str="apple is very good for health";
	char ch='o';
	int index = -1;
	while(1){
		index=str.find(ch,index+1);
		if(index==-1)
		break;
		cout<<index<<" ";
	}
	
}
