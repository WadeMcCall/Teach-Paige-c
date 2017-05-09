#include <iostream>

using namespace std;

int main(){	
	int length; //declare an integer variable.
	
	cout << "what is the length? ";
	cin >> length;  //ask the user for input
	
	int width; 	
	
	cout << "what is the width? ";
	cin >> width;
	
	int area;
	area = length * width;
	cout << area;
}