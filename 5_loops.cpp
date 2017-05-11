/* 
	in this file we explore loops and arrays. We have almost already covered everything you need
	to know to make interesting programs.
*/

#include <iostream>

using namespace std;

int main(){
	int array [5] = {0, 1, 2, 3, 4}; 	//this is an array. arrays hold a list of their data type. this array holds integers.
	int array1[5];

	cout << array[0] << endl; 			//you can obtain a value from an array at their index using brackets. Array indexes start at 0.
										//Therefore, an array of length 5, like in the example, has indexes 0, 1, 2, 3, and 4.
	
	int count = 0;
	while(count < 5){					//this is a while loop. it will execute the code inside repeatedly as long as the condition
		array1[count] = 5 + count;		//inside the parentheses is true. It is very easy to accidentally create infinite loops with while.
										//make sure your case will eventually be false.
		
		count++;						//this line of code increments count. it is shorthand for the code "count = count + 1"
	}
	
	for(int i = 0; i < 5; i++){			//this is a simple for loop. inside of the parentheses, before the first semicolon, you can initialize
										//any variables that will help control your loop. usually, an integer to store the count is fine.
		cout << array1[i] << endl;								
										//before the second semicolon is the condition of the loop. as long as that is true, the code inside will be repeated.
										
										//before the third semicolon is the increment statement. it usually is used to increment your count variable.
										//for loops are a little complex so here is a link that explains them in detail: https://www.tutorialspoint.com/cplusplus/cpp_for_loop.htm
	}

}