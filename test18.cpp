#include <iostream>
using namespace std;

int main() {
    int num,choice;
    cout << "Enter your number: ";
    cin >> num;
    cout<<"Enter your choice E,O: ";
	cin>>choice;

    switch (num % 2) {
        case 'E':
            cout << "Your number is even: " << num << endl;
            break;
        case 'O':
            cout << "Your number is odd: " << num << endl;
            break;
    }

    return 0;
}

