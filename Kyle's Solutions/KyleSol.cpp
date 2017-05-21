#include<iostream>

using namespace std;


int main (){
	int usernumber;
	cout << "The sum of all positive intergers below ";
	cin >> usernumber;
	
	 int number = 0;
	 long int sum = 0;
	
	while (number < usernumber){
		sum = sum + number;
		
		number++;
		
		
	}
	
	cout << "is " << sum << endl;
	
}
