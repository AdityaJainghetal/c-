#include <iostream>
using namespace std;

int main() {
    int arrA[3][3] = { {1, 1, 2}, {5, 6, 7}, {1, 2, 5} };
    int arrB[3][3] = { {5, 5, 1}, {2, 4, 6}, {7, 1, 3} };
    int arrC[3][3];

   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arrC[i][j] = arrA[i][j] + arrB[i][j];
        }
    }

   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arrC[i][j] << " ";
        }
        cout << endl;
    }


}

