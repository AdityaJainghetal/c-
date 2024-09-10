#include <iostream>
using namespace std;

bool pala(int num){
    int original = num;
    int sum = 0;
    
    while(num > 0){
        int last = num % 10;
        sum = sum* 10 + last;
        num = num / 10;
    }
    
    return original == sum;
}

int main(){
    int num;
    cout << "Enter your number: ";
    cin >> num;
    
    if(pala(num)){
        cout << "It is a palindrome number." << endl;
    } else {
        cout << "It is not a palindrome number." << endl;
    }
    
    return 0;
}

