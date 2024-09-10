//#include <iostream>
//using namespace std;
//
//int main(){
//	int num,lastdigit=0,count=0;
//	cout<<"Enter your number: ";
//	cin>>num;
//	
//	while(num>0){
//		lastdigit=num%10;
//		num=num/10;
//		count++;
//		
//		if(lastdigit==7){
//			cout<<"yes"<<endl;
//			break;
//		}
//		
//			else if(lastdigit!=7){
//			cout<<"no"<<endl;
//			break;
//		}
//		
//	}
//}




#include <iostream>
using namespace std;

int main() {
    int num, lastdigit = 0, count = 0;
    bool found = false;
    
    cout << "Enter your number: ";
    cin >> num;
    
    while (num > 0) {
        lastdigit = num % 10;
        num = num / 10;
        count++;
        
        if (lastdigit == 7) {
            found = true;
            break;  // Exit loop early if '7' is found
        }
    }
    
    if (found) {
        cout << "yes" << endl;
    } else {
        cout<<"no"<<endl;
}
}
