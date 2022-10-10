#include <iostream>
#include "Police.h"
using std::cout;
using std::endl;

Person* Police::speak()
{
	cout << "I'm Batman!" << endl;
	return this;
}
