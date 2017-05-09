/*
	in this program, I show you some new data types, if statements and comparison operators.
*/

#include <iostream>

using namespace std;

int main(){
	char character = 'a'; 	//a char stores a single character. the size of a char is 1 byte.
	
	bool cool = true;     	//a boolean(bool) stores true or false. a boolean is a single bit. 
	
	if(cool){ 				//the code in the body of the if statement only executes if 'cool' evaluates to true.
		cout << "I'm cool! B)" << endl;
	}
	if(!cool){ 				//the '!' in this if statement can be read as "not"; making this statement read "if not cool"
		cout << "I'm not cool :(" << endl;
	}
	
	if(character == 'a'){	//'==' is a comparison operator. if the operands are equal, it returns true.
		cout << character << endl;
	}
	else {					//the else statement is only executed if the previous 'if' evaluated to false.
		cout << "not an a! impostor!" << endl; 
	}
}