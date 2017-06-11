//============================================================================
// Name        : 9_Other.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Other Types, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;//1 = ture 0 = false
	cout << bValue << endl;

	char cValue = 55;//char takes one byte of computer memory
	cout << cValue << endl; //represents one value as a character from the ascii (asky)
	// a byte can range from 0-255 and each value corrisponds to a certain character on the ascii table
	//55 on ascii chart is 7.
	//ASCII stands for American Standard Code for Information Interchange
	char cValue1 = '7';//'' single quotation makes value a character
	cout << cValue1 << endl;
	//casting a char to and int
	cout << (int)cValue1 << endl;

	char cValue2 = 'g';
	cout << cValue2 << endl;
	//casting a char to and int
	cout << (int)cValue2 << endl;

	cout << "Size of char: " << sizeof(char) << " byte or 8 bits"<< endl;

	wchar_t nValue = 'i';
	cout << nValue << endl;
	cout << (char)nValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes, (should be 4??)"<< endl;


	return 0;
}
