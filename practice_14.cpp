#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    swap(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}

