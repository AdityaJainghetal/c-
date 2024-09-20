//wrp to read and write opertion in a file abcd.txt

//opening mode

//ofstream object -->
//ios::out      -->output  mode(write mode)
//ios::trunc   -->new data overwrite previouse data, 
//ios::app(append)   -->     preserve previous data,you can add or content after previous content




#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream output;
	output.open("abc.txt",ios::out|ios::app);       //app - append (add content)
	output<<"this is our content\n";
	output<<"file is coming from abc.txt";
	
	output.close();
}
