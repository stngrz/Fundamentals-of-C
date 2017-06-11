//============================================================================
// Name        : Strings.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string text = "This is a string. ";//text would be an object and string a class
	string text1 = "This is also a string. ";
	string text2 = text + text1; //concatination
	cout << text << text1 <<endl;
	cout << text2 << endl;
	return 0;
}
