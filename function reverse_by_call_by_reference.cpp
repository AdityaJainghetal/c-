#include <iostream>
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    
    
    cout << "Before swapping: x = " << a << ", y = " << b<< std::endl;
}

int main() {
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    

    swap(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}

