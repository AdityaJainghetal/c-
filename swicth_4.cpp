#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;

    switch (num % 2) {
        case 0:
            cout << "Your number is even: " << num << endl;
            break;
        default:
            cout << "Your number is odd: " << num << endl;
            break;
    }

    return 0;
}

