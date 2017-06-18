//============================================================================
// Name        : 22_Switch.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	bool state = true;
	//switch is said to be faster than other types of selections types loops
	while (state == true){
	cout << "Please enter a value 1-5 or 6 to quit > " << flush;

	int value;
	cin >> value;


		switch (value) {
		case 1: // case cannot be a variable unless is a const
			cout << "Value is 1." << endl;
			break;
		case 2:
			cout << "Value is 2." << endl;
			break;
		case 3:
			cout << "Value is 3." << endl;
			break;
		case 4:
			cout << "Value is 4." << endl;
			break;
		case 5:
			cout << "Value is 5." << endl;
			break;
		case 6:
			cout << "Value is 6. \nQuitting. . ." << endl;
			state=false;
			break;
		default:
			cout << "Unrecognized value." << endl;
		}

	}

	return 0;
}
