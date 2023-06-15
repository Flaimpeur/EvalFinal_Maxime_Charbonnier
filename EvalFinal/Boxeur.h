#pragma once
#include <string>
using namespace std;

namespace Boxeurs
{
	class Boxeur
	{
	private:
		string nom;
		double poids;
	public:
		Boxeur(string nom, double poids);
		virtual ~Boxeur();
		string GetNom();
		double SetPoids(double monPoids);
		double GetPoids();
	};
}