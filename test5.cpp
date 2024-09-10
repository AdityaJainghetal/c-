 #include <iostream>
 using namespace std;
 
 int main(){
 	int num,last=0,count=0;
 	cout<<"Enter your number";
 	cin>>num;

 	 	while(num>0){
 	 		last = num%10;
 	 		num = num/10;
 	 		count++;
 	 		
 	 		if(last==9){
 	 			cout<<"yes"<<endl;
			  }	

	  }
 }
