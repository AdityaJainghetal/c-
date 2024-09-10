#include <iostream>
using namespace std;



//	int Arr[8];
//		int Arr[0]=56;
//			int Arr[6]=67;
//				int Arr[2]=56;
//				cout<<Arr[0];


//	int Array[5]={12,34,78.34,22}; //data loss index
//		cout<<Array[2];

//	int Array[5]={12,34,"apple",22}; //error
//		cout<<Array[2];



//		In latest compiler
//		compiler can typecast data as
//		
//		double-->int-->char
//		8         4     1
//		
//		double to int, double to char, int to char, possible
//		
//		but 
//		
//		smaller to bigger;
//		int to double,   error throw;


//		int Array[5]={12,45,'A',34,22}; //display ASCII value (typecast into int)
//		cout<<Array[2];

//double Array[5]={12,45,'A',34,22}; //display ASCII value (typecast into int)
//		cout<<Array[2];

int main(){


	int Array[5]={12,34,78.34,22}; //error throw
		cout<<Array[2];

		
		


}
