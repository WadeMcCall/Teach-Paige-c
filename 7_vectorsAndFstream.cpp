#include <iostream>
#include <fstream>		//this includes the fstream object
#include <vector>		//this is a better version of c++ arrays.

/*	
	Vectors, just like arrays, can be thought of as a list of variables.
	In almost all cases, it is better to use a vector than an array.
	vectors work internally using C++ arrays. They are slightly slower, but much easier to use.
	for example, with c++ arrays, you have to know the size of the array before declaring it. 
	however with vectors, they are smart and can expand to fit your memory needs.
	vectors have a certain size that can be obtained using [vector name].size()
*/

/*
	fstream is a stream object. it is similar to cin. fstream stands for file stream.
	as you may have guessed, fstream makes a stream out of a file.
	you can use fstream to print to the file (instead of command line: cout)
	or you can use fstream to get input from the file (instead of command line: cin)
*/
using namespace std;

int main(){
	fstream file;				//declare the fstream object just like any othe variable
	file.open("inputs.txt");	//you must open your file before using it. the character string you give it is the path of the file to open. 
								//in this example, the path is just the name of the file since the file is in our current directory.
	
	vector<float> ins;			//this is how you declare a vector. it looks a little different than other object declarations.
								//the thing in the <> is the type of variable it will hold. 
	
	float temp = 0;				//floats are doubles with less precision.
	
								//the fstream object will return false if there is nothing more for it to get.
								//this line of code says "while there is still something to get from fstream into temp".
	while(file >> temp){		//it also puts whatever is on the next line of the file into temp.
	
		ins.push_back(temp);	//this is how you add something to your vector. push_back(value) adds value to the end of the list.
								//here i am just adding the next number from the file onto the end of the vector.
	}
	float sum = 0;
	for(int i = 0; i < ins.size(); i++){	//for each value in my "ins" vector. size() is a function in the vector class. it returns the size of the vector.
		sum += ins.at(i);					//add its value to the sum
	}
	cout << sum;
}