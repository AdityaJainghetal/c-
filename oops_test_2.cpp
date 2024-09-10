#include <iostream>
using namespace std;

class Person {
public:
    string name;
    string address;
};

class Student : public Person {
public:
    string student_name;
    int student_number;

   
    Student(string stu_name, int stu_num, string n, string addr) {
        student_name = stu_name;
        student_number = stu_num;
        name = n;
        address = addr;
    }

   

};

class Teacher : public Student {
public:
    string teacher_name;
    int teacher_number;

    
    Teacher(string teac_name, int teac_num, string stu_name, int stu_num, string n, string addr)
        : Student(stu_name, stu_num, n, addr) {
        teacher_name = teac_name;
        teacher_number = teac_num;
    }

    
    void display() {
    
        cout << "Teacher Name: " << teacher_name << endl;
        cout << "Teacher Number: " << teacher_number << endl;
        cout << "Student Name: " << student_name << endl;
        cout << "Student Number: " << student_number << endl;
        cout << "Person Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Teacher A1("Rohit", 87987, "cybrom sir", 67696698, "ajay", "bhopal");
    A1.display();

    
}

