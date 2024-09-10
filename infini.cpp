

# include <iostream>
using namespace std;

int main(){
	
	int num,positive=0,negative=0,zero=0;
	string choice="yes";
	while(choice=="yes" || choice=="YES"){
     cout<<"enter:";
     cin>>num;
     if(num>0){
         positive++;}
     else if(num<0){
         negative++;}
      else{
         zero++;}
     
     cout<<"continue  type yes otherwise type no or any other character ";
     cin>>choice;

	}
	
	
	cout<<"positive:"<<positive;
	
	
}
