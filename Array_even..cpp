

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter your range: ";
    cin>>n;
    
    int even[n];
    
    cout<<"Enter "<<n<<" numbers: ";
    for (int i=0;i<n;i++) {
        cin>>even[i];
    }
    
    cout<<"Even numbers: ";
    for (int i=0;i<n;i++){
        if (even[i]%2 == 0) {
            cout<<even[i] << " ";
        }
    }
    cout<<endl;
    
}

