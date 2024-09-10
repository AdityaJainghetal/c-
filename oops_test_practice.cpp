#include <iostream>
using namespace std;

class FindMax {
    public:
        int n1;
        int n2;
        
        FindMax(int num1, int num2)  {
		 n1=num1;
		  n2=num2;
		  }
};

class FindMax2 : public FindMax {
    private:
        double n3;
        double n4;

    public:
        FindMax2(int num1, int num2, double num3, double num4)
            : FindMax(num1, num2){
           	 n3=num3;
			 n4=num4;	
			} 

        void display() {
            cout << "Number 1: " << n1 << endl;
            cout << "Number 2: " << n2 << endl;
            cout << "Number 3: " << n3 << endl;
            cout << "Number 4: " << n4 << endl;
        }
        void displayHighest(){
            double highest = n1; 
            if (n2 > highest) highest = n2;
            if (n3 > highest) highest = n3;
            if (n4 > highest) highest = n4;

            cout << "The highest number is: " << highest << endl;
      }  
}; 

int main() {
  FindMax2 obj(1, 2, 3.5, 4.5);
	obj.display();
 obj.displayHighest();
 return 0;
	
	
}

