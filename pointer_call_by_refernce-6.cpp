#include <iostream>
#include <string>
using namespace std;

void modifyString(string &str) {
    for (int i = 0;i<str.length();i++) {
        if (str[i] == ' '){
            str[i] = '$';
        }
    }
}

int main(){
  string change_value = "we are here to learn";
    cout << "Original string: " << change_value << endl;
    modifyString(change_value);
    cout << "Modified string: " << change_value << endl;
}
