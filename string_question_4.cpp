#include <iostream>
using namespace std;

int main(){

	
	string name[]={"Ajay", "rahul" ,"ritu" ,"raj","a"};
	
    int size=	sizeof(name)/sizeof(name[0]);
	
	for(int i=0;i<size;i++){
		 name[i][0] = toupper(name[i][0]); 
    
	}

   for(int i=0;i<size;i++){
		cout<< name[i]<<endl; 
	}
}
