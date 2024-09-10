#include<iostream>
	using namespace std;
	int main(){
		int number1 =5;
		int number2 =3;
		int number3 = 2;
		cout<<"number1 = number2++\n";
		number1 = number2++;
		number2 = --number3;
		cout << number1<<"and" << number2<<"and" << ++number3;
		return 0;
		
	}
