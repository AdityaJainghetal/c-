

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
	ofstream out;
	string name,address;
//	ofstream output;
string choice;
	out.open("ab.txt",ios::out|ios::trunc);       //app - append (add content)
												
	out<<setw(20)<<"Name"<<setw(20)<<  "Address\n: ";               //out-->file object

	while(1){
		cout<<"Enter name and address : ";
		cin>>name>>address;
		out<<setw(20)<<name<<setw(20)<<address<<"\n";
		
		cout<<"type 'exit' for exit , otherwise any character: ";
		cin>>choice;
		
		if(choice=="exit")
			break;
	}
		cout<<"record inserted";
		out.close();
	
}







//	if(!out){
//		cout<<"file not connected";
//	}
//	else{
//		cout<<"file connected";
//	}
//	
