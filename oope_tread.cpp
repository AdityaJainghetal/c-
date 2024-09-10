#include <thread>
#include <iostream>
using namespace std;
 void f1(){
 	
 }


int main(){
	thread t1(f1);
	t1.join();
}
