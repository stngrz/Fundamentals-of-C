//============================================================================
// Name        : 27_Data.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {

	Cat tomCat;
	//tomCat.happy = false;//not encapsulated
	tomCat.makeHappy();
	tomCat.speak();

	Cat bobCat;
	//bobCat.happy = true;//not encapsulated
	bobCat.makeSad();
	bobCat.speak();

	return 0;
}
