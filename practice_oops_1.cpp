#include <iostream>
using namespace std;

void search_lesser_element(int num){
	int smaller;
//int num;
	int count=0;
	int arr[7]={23,4,55,7,8,99,0};
	for(int i=0;i<=6;i++){
		if(arr[i]<=num){
			count++;
//			smaller=arr[i];
		
		}
	}
		cout<<"number of count smaller then 20: "<<count<<endl;
}

int main(){
	int num;
	int count=0;
	cout<<"Enter your number: ";
	cin>>num;
//		cout<<"number of count number: "<<count;
	search_lesser_element(num);

	
}
