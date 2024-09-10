#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int studentClass;  
    int rollNumber;   
    string contactNumber;
    double marks;

public:
  
    Student(string n, int c, int r, string num, double m) {
    	name=n;
    	studentClass=c;
    	rollNumber=r;
    	contactNumber=num;
    	marks=m;
	}
  
    void display() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Contact Number: " << contactNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    string name, contactNumber;
    int studentClass, rollNumber;
    double marks;

   
    cout << "Enter your name: ";
  	 cin>>name; 
    cout << "Enter your class: ";
    cin >> studentClass;
    cout << "Enter your roll number: ";
    cin >> rollNumber;
    cout << "Enter your contact number: ";
   	cin>>contactNumber;
    cout << "Enter your marks in exam: ";
    cin >> marks;

    Student student(name, studentClass, rollNumber, contactNumber, marks);
    student.display();

}

