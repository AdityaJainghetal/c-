//nesting :
// a complex statement inside the body of another complex statement
#include <iostream>
using namespace std;

	int main(){
		for(int i=1;i<=3;i++){   //outer
			cout<<"set \n";
			for(int j=1;j<=20;j++){     //inner
				cout<<j<<"repetation\n";
			}
		}
	}
