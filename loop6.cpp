//write a program to determine the highest number and lowest number amoung N number?


//Question 2 (multiply input in a loop)
//write a program to take n input from user and Add all of them?
// a.  and also find some of all Even number, Odd number seprately
//    b. add all the number between range 20 to 40?
//      and also show there count?


#include <iostream>
using namespace std;

int main(){
	int n,num,sum=0,odd=0,even=0,count;
	cout<<"Enter range: ";
	cin>>n;
	
	for (int i=1;i<=n;i++){
		cout<<"Enter a range: ";
		cin>>num;
		if(num>=20 && num>=40){
			count++;
			cout<<"cout"<<count<<endl;
		}
					
}
		cout<<"cout"<<count<<endl;

}


