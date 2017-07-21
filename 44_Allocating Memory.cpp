//============================================================================
// Name        : 44_Allocating.cpp
// Author      : Jacob Kolb
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
private:
	string name;
public:
	Animal(){
		cout << "Animal created." << endl;
	}
	Animal(const Animal& other):name(other.name){
		cout << "Animal created by copying" << endl;
	}
	~Animal(){
		cout << "Anamal destroyed" << endl;
	}
	void setName(string name){
		this->name=name;
	}
	void speak()const{
		cout << "My name is: " << name << endl;
	}
};

class Alpha{
private:
	string name;
public:
	Alpha(){}
	Alpha(const Alpha& other):name(other.name){}
	~Alpha(){}
	void setAlpha(string name){
		this->name = name;
	}
	void speakAlpha()const{
		cout << name << endl;
	}
};

int main() {

	int *pInt = new int;//you can use new with almost any type
	*pInt = 8;
	cout << *pInt << endl;
	delete pInt;



//	Animal *pAnimal = new Animal;
//	delete pAnimal;
	Animal *pAnimal = new Animal[2];
	pAnimal[5].setName("Roman");
	pAnimal[5].speak();
	delete [] pAnimal;

//	char *pMem = new char[11];
//	delete [] pMem;

	char c = 'a';
	c++;
	string name(1,c);
	cout << name << endl;

	cout << "Alphabet" << endl;
	cout << "========" << endl;

	int arraySize = 26;
	Alpha *pAlpha = new Alpha[arraySize];
	char alph = 'a';
	for (int i = 0; i<arraySize;i++ ){
		string name(1,alph);
		pAlpha[i].setAlpha(name);
		alph++;
	}
	for (int i = 0; i<arraySize;i++ ){
		pAlpha[i].speakAlpha();
	}
	delete [] pAlpha;
	return 0;
}
