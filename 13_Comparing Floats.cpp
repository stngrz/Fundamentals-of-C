//============================================================================
// Name        : 13_Comparing.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;


int main() {

	float value1 = 1.1;

	if(value1 > 1.1){//consider creating ranges to create tolerances
		cout << "equals" << endl;
	}
	else{
		cout << "not equal" << endl;
	}

	cout << setprecision(20) << value1 << endl;
	return 0;
	// using floats and == for comparison give "random" t/f
	// we cannot use infinite precision
}
