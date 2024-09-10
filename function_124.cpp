#include <iostream>
using namespace std;

void rev(int num){
    int original=num;
    int sum=0;
    
    while(num>0){
        int last=num%10;
        sum = sum+last*last*last;
        num = num/10;
    }
    
    cout<<sum;
}

int main(){
    int num,sum;
    cout<<"Enter your number: ";
    cin>>num;
    rev(sum);
    
}

