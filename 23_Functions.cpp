//============================================================================
// Name        : 22_Switch.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu() {
	cout
			<< "Please enter a value from the list \n1 to Search \n2 to Create new \n3 to View recent\n4 to go back\n5 to reset\n6 to quit \nSelection > "
			<< flush;
}

void processSelection() {
	bool state = true;
	//switch is said to be faster than other types of selections types loops
	while (state == true) {

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
			state = false;
			break;
		default:
			cout << "Unrecognized value." << endl;
		}
		if(state == true){
		cout << "Selection > " << flush;
		}
	}

}
int main() {
	//use functions to simplify what is happening in main, at a glance as it were.
	showMenu();
	processSelection();

	return 0;
}
