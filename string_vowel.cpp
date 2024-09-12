#include <iostream>
using namespace std;

int main() {
    int count = 0;
    
  
    for (char i = 'a'; i <= 'z'; i++) {
     
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') {
           
            count++;
        
            cout << i << endl;
        }
    }

    
    cout << "Total number of vowels: " << count << endl;

   
}

