#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 1, 7, 8};
    int unique[8]; 
    int c = 0; 
    bool found = false;

    for (int i = 0; i < 8; i++) {
        found = false;

        for (int j = 0; j < c; j++) {
            if (arr[i] == unique[j]) {
                found = true;
                break; 
            }
        }

        if (!found) {
            unique[c] = arr[i];
            c++; 
        }
    }

    if (c == 0) {
        cout << "Result: not found" << endl;
    } else {
        cout << "Result: found" << endl;
        cout << "Unique elements:";
        for (int i = 0; i < c; i++) {
            cout << " " << unique[i];
        }
        cout << endl;
    }

    return 0;
}

