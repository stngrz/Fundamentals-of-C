//============================================================================
// Name        : 45_Passing.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//variable declaration here
string numbers[] = {"one","two","three"};

void show1(const int nElements, string texts[]){//pass in number of array elements

//	cout << sizeof(texts) << endl;//returns sized of pointer

	for(int i = 0; i<nElements; i++){
		cout << "show1 using varible: "<< texts[i] << endl;
	}
}

void show2(const int nElements, string *texts){//pass in number of array elements

//	cout << sizeof(texts) << endl;//returns sized of pointer

	for(int i = 0; i<nElements; i++){
		cout << "show2 using pointer: " << texts[i] << endl;
	}
}

void show3(string (&texts)[3]){//pass reference

//	cout << sizeof(texts) << endl;//returns sized of pointer

	for(int i = 0; i<sizeof(texts)/sizeof(string); i++){
		cout << "show3 using reference: " << texts[i] << endl;
	}
}

string *getArray(){
//	string texts[] = {"one","two","three"};//cannot return pointer using local var.
//	return texts;
	return numbers;
}

char *getMemory(){
	char *pMem = new char[11];

	return pMem;
}

void freeMemory(char *pMem){
	cout << "Clear" << endl;
	delete [] pMem;
}

int main() {

	string texts[] = {"apple","orange","banana"};

	cout << sizeof(texts) << endl;

	show1(3,texts);
	show2(3,texts);
	show3(texts);

	char *pMemory = getMemory();
	freeMemory(pMemory);

	return 0;
}
