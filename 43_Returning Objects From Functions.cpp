//============================================================================
// Name        : 42_New.cpp
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
	//constructor
	Animal(){
		cout << "Animal created." << endl;
	}
	//copy constructor
	Animal(const Animal& other):
		name(other.name){
		cout << "Animal created by copying." << endl;
	}
	//destructor
	~Animal(){
		cout << "Destructor called." << endl;
	}
	//set name method
	void setName(string name){
		this -> name = name;
	}
	//speak method
	void speak() const{
		cout << "My name is: " << name << endl;
	}
};

//returning an object from a method

Animal *createAnimal(){//passing around pointers, more efficient use of memory
	Animal *pAnimal = new Animal();
	pAnimal->setName("Betty");
	return pAnimal;
}

int main() {

	Animal *pFrog = createAnimal();

	pFrog->speak();

	delete pFrog;

	return 0;
}
