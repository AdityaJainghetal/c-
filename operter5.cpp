#include <iostream>
using namespace std;

int main(){
	int s = 53;
	int w = -3; 
	int z = 22; 
	
	cout << ++s <<endl;
	w=++s;
	cout<<w<<endl;
	z=s--;
	cout<<z<<endl;
	s=++s;
	cout<<s<<endl;
	return 0;
	
}
