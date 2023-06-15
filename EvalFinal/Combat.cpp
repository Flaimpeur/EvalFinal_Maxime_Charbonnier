#include "Combat.h"
#include <string>
#include <iostream>

using namespace std;

namespace Boxeurs
{
	Combat::Combat(string niveau)
	{
		this->niveau = niveau;
	}

	Combat::~Combat() {
		cout << "----> Destruction du Combat(" << this->niveau << "): " << this << endl;
	}

	string Combat::GetNiveau() {
		return this->niveau;
	}
}