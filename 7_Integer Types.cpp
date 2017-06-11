//============================================================================
// Name        : 7_Integer.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	//INTEGER
	int value = 77;
	cout << "Integer: " << value << endl;
	int value1 = 12313241259; //there is a limit to the size of the number that int will hold
								  // using the wrong variable will result in nonsense answers
	cout << "Large int value: " << value1 << endl;
	cout << "Large int value should be 12313241259 but is wrong due to memory constrain." << endl;
	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;
	//notice the slight difference in min and max, more than just + and -

	//LONG INTEGER
	cout << "Long integer: " << flush;
	long int lValue = 12313241259;
	cout << lValue << endl;
	cout << "Long int value is also wrong due to being too large for variable type memory allotment" << endl;

	//SHROT INTEGER
	cout << "Short integer: " << flush;
	short int sValue = 12345;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
	cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
	cout << "NOTE that short int is 16 bits int and long int are 32 bits compile must consider int and long int same in memory stroage capacity." << endl;

	unsigned int uValue = 12341234;
	cout << "Size of int: " << sizeof(unsigned int) << " bytes, all in positive direction." << endl;
	cout << "Unsigned int: " << uValue << endl;

	return 0;
}
