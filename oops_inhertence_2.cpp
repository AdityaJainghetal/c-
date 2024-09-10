

//wap to create class univercity having data member
//univercity_name,address,session,number_of_streams?
//number_of_college_affilated?


//number function
//paremeteriezed construction
//setter(),getter()


//create a child class college having attribute
//data_memeber: college_name,address,number_of_student

//create a child class college having attribute
//data_memeber: student_name,address,


#include <iostream>
using namespace std;
	
	class University{
	public:
		string university_name;
		string address;
		int number_of_streams;
		string number_of_college_affilated;
		
		
		void uni(){
			cout<<"Enter your univercity name: "<<endl;
//			cin>>univercity_name;
			cout<<"Enter your univercity address: "<<endl;
//			cin>> address;
			cout<<"Enter your stream : "<<endl;
//			cin>> number_of_streams;
			cout<<"Enter your college_affilated: "<<endl;
//			cin>>number_of_college_affilated;
			
		}
		
		University(string clg,string adderess,int stream,string aff){
			univercity_name = clg;
			address = adderess;
			number_of_streams =  stream;
			number_of_college_affilated = aff;
			
			
		
		
		class College : public University{
			public:
				string college_name;
				string address;
				int number_of_student;
			};
			
		   void co() {
        cout << "Enter your college name: " << endl;
        cin >> college_name;
        cout << "Enter your college address: " << endl;
        cin >> college_address;
        cout << "Enter the number of students: " << endl;
        cin >> number_of_students;
    }
			
		}
		
		
		class Student : public College{
			public:
				string student_name;
				string address;

				
	  void st() {
        cout << "Enter your student name: " << endl;
        cin >> student_name;
        cout << "Enter your address: " << endl;
        cin >> student_address;
    }

	
	};
		
		
		};
		
		
	int main(){
	 University uni("Tech University", "123 Tech Lane", 5, 10);
	  uni.co();
    cout << "University Name: " << uni.co() << endl;
	College col("Tech University", "123 Tech Lane", 5, 10, "Engineering College", "456 College Rd", 200);
    col.co();
    cout << "College Name: " << col.co() << endl;
    Student stu("John Doe", "789 Student St");
    stu.st();
    cout << "Student Name: " << stu.st() << endl;
	}

