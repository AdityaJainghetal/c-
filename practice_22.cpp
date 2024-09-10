#include <iostream>
using namespace std;

int main(){
	int marks[8]={88,44,66,77,8,9,22,69};
	int n=8;
	int count=0;
	for (int i=0;i<n;i++){
		cout<<marks[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		if(marks[i]<=60){
			count++;
			
		//	cout<<"failed student index"<<i<<"marks"<<marks[i]<<endl;
		}
		
	}
	cout<<"count number: "<<count<<endl;

}
