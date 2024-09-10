//write a program to calculate the sum of individual sum of digit of number?

#include <iostream>
using namespace std;

int main(){
	int num,sum=0,last,temp;
	cout<<"enter test number: ";
	cin>>num;
	temp=num;
	

	
	while(num>0){
		last=num%10;
		sum=sum+last;
		num=num/10;
	}
//	if(temp=sum){
		cout<<"sum of digit:"<<sum;
//	}
//	else{
//		cout<<"it is not a armstrong number:";
//		
//}
}

