#include <iostream>
using namespace std;

int main(){
	int money,rem1,rem2,rem3,rem4,rem5,rem6,rem7,rem8,rem9,rem10;
	cout<<"Enter your money: ";
	cin>>money;
	
	if(money>2000 || money<2000){
		rem1 = money/2000 ;
		cout<<"your 2000 notes"<<rem1<<endl;
  		rem2 = money/500 ;
		cout<<"your 500 notes"<<rem2<<endl;
			if(money>=200   )
		rem3 = money/200 ;
		cout<<"your 200 notes"<<rem3<<endl;
			if(money>=100)
			rem5 = money/100 ;
		cout<<"your 100 notes"<<rem5<<endl;
	
		if(money>=50)
			rem6 = money/50 ;
		cout<<"your 50 notes"<<rem6<<endl;
		
				if(money>=10 )
		rem7 = money/10 ;
		cout<<"your 10 notes"<<rem7<<endl;
		
				if(money>=5 )
			rem8 = money/5 ;
		cout<<"your 5 notes"<<rem8<<endl;
		
				if(money>=2 )
			rem9 = money/2 ;
		cout<<"your 2 notes"<<rem9<<endl;
		
				if(money>=1)
		rem10 = money/1 ;
		cout<<"your 1 notes"<<rem10<<endl;
	}
	else{
		cout<<"Invalid"<<endl;
	}
}
