//============================================================================
// Name        : 21_Size.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int values[] = {1,2,3,4,5};

	cout << sizeof(values) << endl;//using sizeof to determine how many items are in the array
									//by dividing the size of the array by the size of the data type
									//the array is composed of ie total array size/size of type = total items in array
	cout << sizeof(int) << endl;

	for(int i = 0; i<5;i++){
		cout << values[i] << " " << flush;
	}
	cout << endl;

	//counting size of a 2D array

	cout << "\nSize of 2D Array" << endl;
	cout << "================" << endl;

	int twoDArray[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
	cout << "Size of twoDArray: " << sizeof(twoDArray)/sizeof(int) << endl;

	return 0;
}
