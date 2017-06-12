//============================================================================
// Name        : 10_If.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";

	// << put to
	cout << "Enter your password > " << flush;

	//recommended-declaring variables close to where its being used.

	string input;
	cin >> input;
	//check that input is caputred correctly
	//cout << "'"<< input << "'" << endl;

	if(input == password){
		cout << "Password accepted" << endl;
	}
	if(input != password){
		cout << "Access denied" << endl;
	}

	return 0;
}
