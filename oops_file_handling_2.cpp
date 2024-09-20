//wrp to read and write opertion in a file abcd.txt
#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream output;
	output.open("abc.txt");
	output<<"this is our content\n";
	output<<"file is coming from abc.txt";
	
	output.close();
}
