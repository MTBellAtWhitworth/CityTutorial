#include <string>
using std::string;

#ifndef PERSON_H
#define PERSON_H

class Person {
private:
	string name;
public:

	Person() : name("John Doe") {}
	Person(string nomen) : name(nomen) {}

	string getName() { return name; }

	virtual Person* speak() = 0; 
};

#endif