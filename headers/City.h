#include <vector>
#include "Person.h"
using std::vector;

#ifndef CITY_H
#define CITY_H

class City {
private:
	vector<Person*> residents;
public:

	void addResident(Person*);

	void tourResidents();

};

#endif
