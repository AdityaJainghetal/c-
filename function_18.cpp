#include <iostream>
using namespace std;
int palindrom(int num){
	int temp,sum=0,last;
    temp=num;
    while(num > 0){
        int last = num % 10;
        sum = sum * 10 + last;
        num = num / 10;
    }
    if(temp==sum){
//    	return "yes";
	}
	else{
//		return "no";
	}
}

int main(){
    int num;
    cout << "Enter your number: ";
    cin >> num;
    
    string  = palindrom(num);
    cout<<result<<endl;
}

