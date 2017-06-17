//============================================================================
// Name        : Break-Continue.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/* BREAK...
	 for(int i = 0; i < 5; i++){
	 cout << "i is: " << i << endl;
	 if(i == 3){
	 break;
	 }
	 cout << "Looping..." << endl;
	 }
	 */
	/* CONTINUTE...
	 for(int i = 0; i < 5; i++){
	 cout << "i is: " << i << endl;
	 if(i == 3){
	 continue;// allows to skip something if a condition is met
	 }
	 cout << "Looping..." << endl;
	 }
	 */

	const string password = "hello";

	string input;

	do {
		cout << "Enter your password > " << flush;
		cin >> input;

		if (input == password) {
			break;
		}
		else{
			cout << "Access denied." << endl;
		}

	} while (true);

	cout << "Password Accepted" << endl;

	cout << "Program quitting..." << endl;

	return 0;
}
