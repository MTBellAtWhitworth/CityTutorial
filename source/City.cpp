#include <iostream>
#include <string>
#include "City.h"
#include "Person.h"
#include "Vampire.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

void City::addResident(Person* p)
{
	residents.push_back(p);
}

void City::tourResidents()
{
	std::cout << "Welcome to our city! Let our citizens introduce themselves!" << endl;

	//More on this hopefully later in the term. For now, I think what it's doing is intuitive,
	//so let's just focus on polymorphism, shall we.
	//Your mission: change this so that it gives the tourist a chance to escape vampires.
	for (unsigned int i = 0; i < residents.size(); i++) {
		if(true) // Change this so that the if clause handles non-vampires.
			residents[i]->speak();
		else { // The else clause allows the tourist to try to escape the vampire.
			cout << "Something feels evil about the approaching citizen. Do you still approach (Y/N)?";
			string yn;
			getline(cin, yn);
			if (yn != "Y")
				cout << "Good call! That guy gave me the heebie jeebies." << endl;
			else {
				//Capture a pointer to the former tourist's self, and add it as a new vampire to the city
				residents.push_back(residents[i]->speak());
				break; // Don't want to continue the tour!
			}
		}
	}
}
