#include <iostream>
using namespace std;
 
 int main(){
 	int x = 5, y = 5 , z;
 	x = ++x; y = --y; 
 	z = x++ + y--;
 	cout <<z;
 	return 0;
 }
