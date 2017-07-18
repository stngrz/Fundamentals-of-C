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
		cout << "Animal created." << endl;//text added for use verification
	}
	//copy constructor
	Animal(const Animal& other):
		name(other.name){
		cout << "Animal created by copying." << endl;//text added for use verification
	}
	//destructor
	~Animal(){
		cout << "Destructor called" << endl;//text added for use verification
	}

	void setName(string name){
		this -> name = name;
	}

	void speak() const{
		cout << "My name is: " << name << endl;
	}
};


int main() {
	//using new will not automatically call a destructor so you MUST
	Animal *pCat1 = new Animal();//if no arguments are used in constructor this () arent implicitly needed
	pCat1 -> setName("Freddy");
	pCat1 -> speak();
	delete pCat1;//call delete if you call new, if delete is use on "nothing" crashes can occur

	//pointers are the same size as longs and is dependent on system?
	cout << sizeof(pCat1) << endl;
	//Animal *pCat2 = NULL;
	//delete with NULL can crash a program

	return 0;
}//this is where  destructors will be called-deallocates the memory
