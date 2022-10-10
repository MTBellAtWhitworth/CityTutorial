#include <string>
#include "Person.h"
using std::string;

#ifndef VAMPIRE_H
#define VAMPIRE_H

class Vampire : public Person {
public:
	Vampire() : Person() {}
	Vampire(string nomen) : Person(nomen) {}

	Person* speak();
};

#endif