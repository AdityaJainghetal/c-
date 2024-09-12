#include <iostream>
using namespace std;

void printTable(int num, int i) {
    if (i > 10) {
        return;
    }
    cout << num << " x " << i << " = " << num * i <<endl;
    printTable(num, i + 1); 
}

int main() {
    int num;
    cout << "Enter the number for which you want to print the table: ";
    cin >> num;
    printTable(num, 1);

 
}

