//============================================================================
// Name        : 25_Prototypes.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "utils.h"//text file, depends on the complier

using namespace std;

//void doSomething();//prototype similar to an include or using

int main() {

	doSomething();

	return 0;
}

void doSomething() {
	cout << "hi" << endl;
}
