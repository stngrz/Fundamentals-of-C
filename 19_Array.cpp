//============================================================================
// Name        : 19_Array.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Array of integers" << endl;
	cout << "=================" << endl;
	int values[3];

	values[0] = 88;
	//values[1]   = 99;
	values[2] = 111;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << "\nArray of doubles" << endl;
	cout << "=================" << endl;
	double numbers[4] = { 4, 5, 6, 7 };

	for (int i = 0; i < 4; i++) {
		//numbers[i] = 99; //over writes value before each output
		cout << "Element at index " << i << " : " << numbers[i] << endl;
	}

	cout << "\nInitializing with zero values" << endl;
	cout << "=============================" << endl;

	int numberArray[8] = { };

	for (int i = 0; i < 8; i++) {
		cout << "Element at index " << i << " : " << numberArray[i] << endl;
	}

	cout << "\nArray of Strings" << endl;
	cout << "================" << endl;

	string texts[] = { "Apple", "Orange", "Banana" };
	for (int i = 0; i < 3; i++) {
		cout << "Element at index " << i << " : " << texts[i] << endl;
	}
	return 0;
}
