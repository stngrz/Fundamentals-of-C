/*
 * Cat.cpp
 *
 *  Created on: Jun 19, 2017
 *      Author: JKolb
 */
#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak() {
	if(happy){
	cout << "Meow" << endl;
	}else{
		cout<< "SSssss" << endl;
	}
}
void Cat::makeHappy(){
	happy = true;
}
void Cat::makeSad(){
	happy = false;
}
