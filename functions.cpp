#include <iostream>

using namespace std;

/*
	these are function prototypes. they are here to tell the compiler not to freak out
	when it sees these functions in your main even though they arent defined yet.
*/

void sayHello();
int sum(int a, int b);
float product(float a, float b);

int main(){
	sayHello();
	
	int a = 4;
	int b = 3;
	int c = sum(a, b);
	cout << c << endl;
	
	
	float x = 4.3;
	float y = 3.3;
	cout << product(x,y);
}

/*
	this is how you declare a function. 
	your function must match the function prototype
*/
void sayHello(){   //says hello
	//this is the body of the function. anything between the braces is part of the function.
	cout << "hello!" << endl;
}


int sum(int a, int b){  //returns the sum of the two arguments
	return a + b;
}

//returns the product of a and b
float product(float a, float b){
	return a * b;
}

