//============================================================================
// Name        : 15_While.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int i = 0;//loop counter usually i, more specific is better

	while(i < 5){//infinite loop!
		cout << "HI " << i << endl;
		//i = i + 1;
		i++;//increment i by one
	}

	cout << "Program quitting." << endl;

	return 0;
}
