#include "Boxeur.h"
#include <string>
#include <iostream>

using namespace std;

namespace Boxeurs
{
	Boxeur::Boxeur(string nom, double poids)
	{
		this->nom = nom;
		this->poids = poids;
		SetPoids(poids);
	}

	Boxeur::~Boxeur()
	{
		cout << "----> Destruction du Boxeur(" << this->nom << "): " << this << endl;
	}

	string Boxeur::GetNom()
	{
		return this->nom;
	}

	double Boxeur::GetPoids()
	{
		return this->poids;
	}

	void Boxeur::SetPoids(double monPoids)
	{
		this->poids = monPoids;
	}
}