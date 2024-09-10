
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your range: ";
    cin >> n;
    
    int odd[n];
    
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> odd[i];
    }
    
    cout << "Odd numbers: ";
    for (int i = 0; i < n; i++) {
        if (odd[i] % 2 != 0) {
            cout << odd[i] << " ";
        }
    }
    cout << endl;
    
}

