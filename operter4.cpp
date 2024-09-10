#include <iostream>
using namespace std;

	int main(){
		int x = 5, y = 5, z;
		x = ++x; y = --y; // x = 6, y = 4;
		++y; //4
		z = x + ++x; // x=7 , x= 7
		cout << z;
		return 0;
		
	}
