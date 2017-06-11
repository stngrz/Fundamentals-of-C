//============================================================================
// Name        : 5_Input.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//STRING
	//cout is an object for outputting text \   << is an insertion operator
	cout << "Enter your name: " << flush; // prints !!!Hello World!!!
	string input;// declaring input in  a string
	//cin is an object or user input from the console the >> operator extract whats there
	cin >> input;
	cout << "You entered: " << input << endl;

	//INTEGER
	cout << "Enter a number: "<< flush;
	int value;
	cin >> value;
	cout << "You entered: "<< value << endl;
	return 0;
}
