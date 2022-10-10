#include<iostream>
#include<string>
#include "Person.h"
#include "Citizen.h"
#include "Police.h"
#include "Vampire.h"
#include "City.h"
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main() {
	//Let's make a city...
	City metropolis;

	//...and add some people to it, including one vampire named David Boreanaz!
	metropolis.addResident(new Citizen("Fred Rogers"));
	metropolis.addResident(new Citizen("Pete Tucker"));
	metropolis.addResident(new Citizen("Anne Trefry"));
	metropolis.addResident(new Police("Dexter"));
	metropolis.addResident(new Vampire("David Boreanaz"));

	//Now, tour the city and play the game!
	string keep_playing = "Y";
	while (keep_playing == "Y") {
		metropolis.tourResidents();
		cout << "Do you want to tour again (Y/N)?";
		getline(cin, keep_playing);
	}
}