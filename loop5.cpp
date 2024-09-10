//write a program to determine the highest number and lowest number amoung N number?


//Question 2 (multiply input in a loop)
//write a program to take n input from user and Add all of them?
// a.  and also find some of all Even number, Odd number seprately
//    b. add all the number between range 40 to 60?
//      and also show there count?


#include <iostream>
using namespace std;

int main(){
	int n,sum=0,num,even=0,odd=0;
	cout<<"Enter range: ";
	cin>>n;
	
	for (int i=1;i<=n;i++){
		cout<<"Enter a number: ";
		cin>>num;
//		sum=sum+num;

	if(num%2==0){
			even=even+num;
		}
		else{
			odd=odd+num;
		}
		sum=sum+num;
		
	}
	cout<<"Sum "<<sum;
	cout<<"Sum of even "<<even<<endl;
	cout<<"Sum odd odd "<<odd<<endl;
}
