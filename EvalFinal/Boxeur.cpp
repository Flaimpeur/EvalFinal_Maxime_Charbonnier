#include "Boxeur.h"
#include <string>
using namespace std;

namespace Boxeurs
{
	string Boxeur::GetNom()
	{
		return this->nom;
	}

	double Boxeur::GetPoids()
	{
		return this->poids;
	}

	double Boxeur::SetPoids(double monPoids)
	{
		
		return monPoids;
	}
}