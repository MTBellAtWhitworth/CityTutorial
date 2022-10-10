#include<string>
#include "Person.h"
using std::string;

#ifndef POLICE_H
#define POLICE_H

class Police : public Person {
public:
	Police() : Person() {}
	Police(string nomen) : Person(nomen) {}

	Person* speak();
};

#endif