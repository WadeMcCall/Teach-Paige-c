#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main(){
	srand(time(NULL));
	
	int numPeople;
	cout << "How many people? ";
	cin >> numPeople;
	
	int name;
	name = rand() % numPeople;
	
	vector<string> people;
	string tempstr;
	for(int i = 0; i < numPeople; i++){
		cout << "add a name: ";
		cin >> tempstr;
		people.push_back(tempstr);
	}
	
	cout << "the person chosen was " << people.at(name);
}