#include <iostream>
#include <string>
using namespace std;

bool containsCharA(const string& str) {
    for (char ch : str) {
        if (ch == 'a' || ch == 'A') {
        		return true;
        }
    }
    return false;
}

int main() {
    string chara;
    cout << "Enter your character: ";
    cin >> chara;
    
    if (containsCharA(chara)) {
        cout << "'a' or 'A' is present in the string." << endl;
    } else {
        cout << "'a' or 'A' is not present in the string." << endl;
    }
    
    return 0;
}

