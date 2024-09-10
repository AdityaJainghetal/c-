#include <iostream>
using namespace std;

int main() {
    int n,sum=0,j=0;
    cout<<"Enter your range: ";
    cin>>n;
    
    int all[n];
//    int even[n];
    int odd[n];
   
    cout<<"Enter "<<n<<" numbers: ";
    for (int i=0;i<n;i++) {
        cin>>all[i];
    }
    
  
    for (int i=0;i<n;i++){
        if (all[i]%2 != 0) {
           odd[j]=all[i];
		   j++; 
        }
    }
    
    for (int i=0;i<j;i++){
        
          cout<< odd[i]<<" ";
		   }

//    j=0;
//    for (int i=0;i<n;i++){
//      if (all[i]%2 == 0) {
//           even[j]=all[i];
//		   j++; 
//        }
//    }
   
    
}

