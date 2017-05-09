/*
	in this program, we define functions and use them in our program.
	functions are a very important building block of large programs. 
	they help you easily reuse code and simplifies larger problems.
*/
#include <iostream>

using namespace std;

/*
	this is how you declare a function. 
	your function must match the function prototype
	void means that this function returns nothing.
*/
void sayHello(){   //says hello
	cout << "hello!" << endl;
}

/*
	the previous function began with the keyword "void" which meant that it returned nothing.
	this function begins with "int". this means that this function returns an integer.
	'a' and 'b' in this function are called arguments. they are passed into the function.
	the work done to 'a' and 'b' inside of the function does not affect the variables that are passed in. it only affects 'a' and 'b'.
*/
int sum(int a, int b){  //returns the sum of the two arguments
	a = a + b;
	return a;
}


float product(float a, float b){ //returns the product of a and b
	return a * b;
}

int main(){
	sayHello();     //this is how you call a function.
	sayHello();     //a function can be reused any number of times.
	
	int arg1 = 4;
	int arg2 = 3;
	int c = sum(arg1, arg2); //functions can be used in assignment statements. 
	cout << c << endl;
	
	cout << product(4.3,3.3);  //functions can be given to cout which will then print the return value.
}