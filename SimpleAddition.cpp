/*
	In this file, I will show you some basic data types and how
	to do arithmetic.
*/

#include <iostream>

using namespace std;

int main(){
	//integers or ints are any "counting" number, or a non-decimal.
	
	int integerNumber; //declare an integer variable.
	integerNumber = 2; //set the value of the integer.
	
	int otherInt = 4;  //a variable can be both declared and set on the same line.
	
	int sum = 0;
	sum = integerNumber + otherInt;
	cout << "the sum of "  << integerNumber << " and " << otherInt << " is: ";
	cout << sum << endl;
	
	//doubles are point decimal numbers		
	double x = 3.6;
	double y = 0.5;
	
	cout << "the sum of "  << x << " and " << y << " is: ";	
	cout << x + y << endl;
}