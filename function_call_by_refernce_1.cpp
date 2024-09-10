#include <iostream>
using namespace std;


void  Great(int &a, int &b, int &c) {
    if (a > b && a > c) {
        a=a;
    } else if (b > a && b > c) {
     a=b;
    } else {
        a=c;
    }
}

int main() {
    int n1 = 45;
    int n2 = 56;
    int n3 = 99;

    Great(n1, n2, n3);
cout<<n1<<endl;
//    cout << greatest << endl;
    
   
}

