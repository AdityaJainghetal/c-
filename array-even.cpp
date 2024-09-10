#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cout<<"Enter the limit: ";
    cin>>n;
    
    int* arr = new int[n]; //pointer
    int count = 0;

    while (count < n) {
        cout<<"Enter number: ";
        cin>>temp;
        if (temp % 2 == 0) {
            arr[count] = temp;
            count++;
        } else {
            cout << "Number is not even, try again." << endl;
        }
    }

    cout << "Even numbers:" << endl;
    for (int i=0;i<n;++i) {
        cout<<"Number: "<<arr[i]<<endl;
    }

}

