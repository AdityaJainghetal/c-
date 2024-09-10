//very important
// write a program to display fibonacci series of n term?
//7 term

//0 1 1 2 3 5 8 13 .....
//n=7
//0 1 1 2 3 5 8 13

#include <iostream>
using namespace std;

int main()
		int n,n1=0,n2=1,n3;
		cout<<"Enter range:";
		cin>>n;
		cout<<n1<<" "<<n2<<" ";
		for(int i=1;i<=n-2;i++){
			n3=n1+n2;
			cout<<n3<<" ";
			n1=n2;
			n2=n3;
			
		}
 
