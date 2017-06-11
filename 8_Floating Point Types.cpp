//============================================================================
// Name        : 8_Floating.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>// iomanip input out put manipulation

using namespace std;

int main() {

	int value = 76.4;
	float fValue = 76.4;
	cout << "The number is 76.4." << endl;
	cout << "Showing int: " << value << endl;
	cout << "Showing fixed: " << fixed << fValue << endl;
	cout << "Showing scientific: " << scientific << fValue << endl;
	//cout will show 8 digits by default
	cout << "Size of float is: " << sizeof(float) << " bytes." << endl;
	cout << "Setting the precision of stored float value to 20 places: "<<setprecision(20) << fixed << fValue << endl;

	//NOTE double should be more precise
	cout << "Size of double is: " << sizeof(double) << " bytes." << endl;
	double dValue = 76.4;
	cout << "Setting the precision of stored double value to 20 places: " << setprecision(20) << fixed << dValue << endl;

	cout << "Size of long double is: " << sizeof(long double) << " bytes." << endl;
	long double lValue = 76.4;
	cout << "Setting the precision of stored long double to 20 places: " << setprecision(20) << fixed << lValue << endl;

	cout << "Problems displaying long double using cout and not sure yet how to fix.\n-See comments on fourm: http://mingw.5.n7.nabble.com/Strange-behaviour-of-gcc-4-8-1-with-long-double-td32949.html"<<endl;
	(lValue);

	return 0;
}
