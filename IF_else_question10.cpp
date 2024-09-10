#include <iostream>
using namespace std;

int main(){
	int length,breath,side;
	cout<<"Enter your length, breath:";
	cin>>length>>breath;
	cout<<"Enter your side:";
	cin>>side;
	
	float reactangle = length*breath;
	float square=side*side;
	
	
	if(reactangle>square){
		cout<<"your area of reactangle is greatest: "<<reactangle<<endl;
	}
	
	else{
			cout<<"your area of square is greatest: "<<square<<endl;
	}
	
//	Reactangle = length*breath;
	
}
