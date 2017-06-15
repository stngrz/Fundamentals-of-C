//============================================================================
// Name        : 16_Do-While.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//EXAMPLE
	//int value = 7;
	//do{
	//	cout << "HI" << endl;
	//}while(value<5);

	const string password = "hello";// const is often declared at the top of subroutine
	string input;
	//WHILE ONLY-creats more instances of code than necessary
	//cout << "Enter password > " << flush;
	//string input;
	//cin >> input;

	//while(input != password){
	//	cout << "Invalid entry." << endl;
	//	cout << "Enter password > " << flush;
	//	//string input;//this input is unique to this function
	//	cin >> input;//the scope of this input is only within the while brackets
	//}
	//cout << "Password accepted!" << endl;

	//DO_WHILE
	do {
		cout << "Enter your password > " << flush;
		cin >> input;

		if (input != password) {
			cout << "Access denied." << endl;
		}

	} while (input != password);

	cout << "Password Accepted." << endl;

	return 0;
}
