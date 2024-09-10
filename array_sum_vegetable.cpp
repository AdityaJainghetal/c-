#include <iostream>
#include <string> 
using namespace std;

int main() {
    
    int vegetable[4][5];
    string buyer[4];

    int addition_of_all[4];
    for (int i=0;i<4;i++) {
        cout << "Enter your name: ";
        cin >> buyer[i];
        int sum = 0; 
        for (int j = 0; j < 5; j++) {
            cout << "Enter cost for vegetable " << j+1<<":";
            cin >> vegetable[i][j]; 
            sum = sum + vegetable[i][j];
        }
        addition_of_all[i] = sum; 
    
}
for (int i = 0; i < 4; i++) {
        cout << buyer[i] << "'sum of total vegetable number is: " << addition_of_all[i] << endl;
   
     }
     cout<<endl;
   for (int i = 0; i < 4; i++) {
        int total=addition_of_all[i];
        int dis;
        if(total >1000 && total <=1500){
            dis= total*0.05	;
		}
		else if(total >1500 && total <=2000){
            dis= total*0.1	;
		}
		
		total=total -dis;
          
        
        
        
        
        
        
        
        
        
        cout<<"amount paid by buyer "<<buyer[i]<<" is "<<total<<endl;
   
     }  
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}

