#include <iostream>
#include <string>
#include <algorithm> // Include algorithm header for reverse function
using namespace std;

int main() {
    string s = "raghav is a good boy";
    cout << s << endl;
    
    // Reverse the string
    reverse(s.begin(), s.end());
    
    cout << s << endl;

    return 0;
}

