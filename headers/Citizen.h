#include <string>
#include "Person.h"
using std::string;

#ifndef CITIZEN_H
#define CITIZEN_H

class Citizen : public Person {
public:
	Citizen() : Person() {}
	Citizen(string nomen) : Person(nomen) {}

	Person* speak();
};

#endif