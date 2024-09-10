#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    
    int lastDigit = number % 10;
    while (number >= 10) {
        number /= 10;
    }
    int firstDigit = number;

    
    int sum = firstDigit + lastDigit;

    
    cout << "Sum of first and last digit of " << number << " is: " << sum << endl;

 
}

