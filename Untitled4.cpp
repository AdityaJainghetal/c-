#include <iostream>
using namespace std;

int main(){
    int a=90,b=7,c=21;

    c=a++;
    b=++c;
    a=b+c;
    a++;

    cout<<"a :"<<a<<" b:"<<b<<"c"<<c<<endl;

}
