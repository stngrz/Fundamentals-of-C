//============================================================================
// Name        : Variables.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int numCats = 5; //int is a key work
	int numDogs = 7;
	cout << "Number of cats " << numCats << endl; //"text" is a string literal
	cout << "Number of dogs " << numDogs << endl;
	cout << "Total animals " << numCats + numDogs << endl;
	cout << "New dog acquired" << endl;
	numDogs = numDogs + 1;
	cout << "New number of dogs " << numDogs << endl;
	return 0;
}
