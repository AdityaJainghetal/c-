#include <iostream>
using namespace std;

void rev(int num){
    int original=num;
    int sum=0,temp=num;
    
    while(num>0){
        int last=num%10;
        sum = sum+last*last*last;
        num = num/10;
    }
    
   
}

int main(){
    int num,sum,temp;
    cout<<"Enter your number: ";
    cin>>num;
    rev(num);
    
    	if(temp == sum){
		cout<<"it is a armstrong number:";
	}
	else{
		cout<<"it is not a armstrong number:";
		
}
    
}

