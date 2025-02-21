#include <iostream>
#include <string>
#include "Vampire.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

Person* Vampire::speak()
{
	cout << "Ssssssss! <Bite!> <Bite!> <Bite!>" << endl;
	cout << "You've been bitten by a vampire and now are a cursed undead." << endl;
	cout << "What was your name in life, former mortal? " << endl;
	string name;
	getline(cin, name);

	Vampire* spawn = new Vampire(name);
	return spawn;
}
