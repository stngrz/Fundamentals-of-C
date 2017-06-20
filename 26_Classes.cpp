//============================================================================
// Name        : 26_Classes.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//

//classes kind like making your own variable type

#include <iostream>
#include "Cat.h"
#include "Dog.h"
using namespace std;


int main() {

	Cat cat;//class is uppercase variable is lowercase this is an object
	Dog dog;

	cat.speak();
	cat.jump();
	dog.speak();
	dog.jump();


	return 0;
}
