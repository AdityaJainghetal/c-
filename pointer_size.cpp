#include <iostream>
using namespace std;

int main(){
	char msg[]="pineapple";
	int count=0;
	char *ptr=msg;
	
	while(*ptr!='\0'){
		count++;
		ptr++;
	}
	cout<<"number of characters: "<<count<<endl;
}
