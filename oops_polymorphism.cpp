//polymorphism
              //when ever the behavoir of an object is different in different situction then concept is know is polymorphism .

//            poly=many
//            monphism=form




//every function should be link to proper function defination placed at code section of memory.
//this linkage is either done at compile time or at run time.

//at compile ,on the bases of diiferent function signature.complier link the function call to the appropriate function.



//signature- (prototype,decleration)
			
//			function name(int,int,double);



//--------------------------------
//if we want to function overloading so, we have to change the function signature
			
//			1.number of paramerter changes
//			2.data type change








//			type of category-
			
//								polymorphism
							
					
//					complier type                    run time
//					static type                      dynamic binding
//					early binding                    late binding
					
					
//					1. function overloading           1.function overloading
//					2. opertor overloading             



//----------------------------------------------------------------//

//linkage
//---------



//code                           //stack                   //heap           //global

//f() deparement               function call execute     dynamic memory      global statis variable 
//class

//function defination



//lifetime

//through out program            //funtion terminate 		      //user dependent              //throughtout the program
//								througout program          






#include <iostream>
using namespace std;

void add(int number1 ,int number2){
	cout<<"with int,int \n";
	cout<<"Addition: "<<number1+number2<<endl;
}

void add(double number1 ,int number2){
	cout<<"with double,int \n";
	cout<<"Addition: "<<number1+number2<<endl;
}

void add(double number1 ,int number2,int number3){
	cout<<"with double,int,int \n";
	cout<<"Addition: "<<number1+number2+number3<<endl;
}







int main(){
	add(2,3,3.8);
}

