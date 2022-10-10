#include <iostream>
#include "Citizen.h"
using std::cout;
using std::endl;

Person* Citizen::speak()
{
	cout << "What a beautiful day! Surely nothing could go wrong." << endl;
	return this;
}
