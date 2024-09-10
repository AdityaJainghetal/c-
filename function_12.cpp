#include <iostream>
using namespace std;

void rev(int num){
    int original=num;
    int reversed=0;
    
    while(num>0){
        int last=num%10;
        reversed = reversed*10+last;
        num = num/10;
    }
    
    cout<<reversed;
}

int main(){
    int num,reversed;
    cout<<"Enter your number: ";
    cin>>num;
    rev(num);
    
}

