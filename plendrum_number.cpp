#include <iostream>
using namespace std;

int main() {
    for (int i=100;i<=300;i++) {  // Corrected initialization of loop variable 'i'
        int num = i,temp=num,sum=0,last;  // Moved variable declaration inside the loop
        while (num>0) {
            last=num%10;
            sum=sum*10 +last; 
            num=num/10; //forward and reverse same
        }
        if (temp==sum) {
            cout<<temp<<" is a palindrome."<<endl;  // Added missing semicolon and print message
        }
    }

    return 0;  // Added return statement to indicate successful execution
}

