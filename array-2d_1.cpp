#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {1,2,3,4,1,6,7,8,9};
    int temp[3];
    
    for(int i=0;i<3;i++) {   			// Iterate through each row of the 2D array
        for(int j=0;j<3;j++) { 			// Copy the current row into temp
            temp[j] = arr[i][j];
        }   
        for(int j=0;j<3;j++) {   		// Print the contents of temp
            cout<<temp[j]<<" ";
        }
        cout<<endl; 					// Print a newline after each row
    }	
}

