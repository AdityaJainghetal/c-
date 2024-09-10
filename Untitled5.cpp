#include <iostream>
using namespace std;

int main(){
int a=99,b=65,c=22;
    c=a++; //23
    b=++c; //66
    a=b+c; // 89
    a++;  //90

    cout<<"a:"<<a<<"b:"<<b<<"c:"<<c<<endl;

}
