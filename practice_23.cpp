#include <iostream>
using namespace std;

// Function to check if the character is 'a' or 'A'
bool matchA(char c) {
    return (c == 'a' || c == 'A');
}

int main() {
    char chara; // Use 'char' type to store a single character

    cout << "Enter your character: ";
    cin >> chara; // Read a single character from user input

    if (matchA(chara)) {
        cout << "The character is 'a' or 'A'." << endl;
    } else {
        cout << "The character is not 'a' or 'A'." << endl;
    }

    return 0;
}

