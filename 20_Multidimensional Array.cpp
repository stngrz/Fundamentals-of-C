//============================================================================
// Name        : 20_Multidimensional.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//string animals[2][3] = {//2 element array, 2d array
	//		{"fox","dog","cat"},
	//		{"mouse","squirrel","parrot"}
	//};
	//
	//for(int i = 0; i < 2; i++){
	//	for(int j = 0; j < 3; j++){
	//		cout << animals[i][j] << " " << flush;
	//	}
	//
	//	cout << endl;
	//}


	// Create a table of products as a 10x10 array
	cout << "10x10 Product Array" << endl;
	cout << "===================" << endl;
	for(int i = 1; i<=10;i++){
		for(int j = 1; j <= 10; j++){
			cout <<i*j << " " << flush;
		}
		cout << endl;
	}
	return 0;
}
