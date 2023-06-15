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
	void Combat::SetCoinBleu(Boxeur* boxeur)
	{
		if (boxeur != CoinRouge)
		{
			if (boxeur != nullptr)
			{
				this->CoinBleu = boxeur;
				cout << endl << "Le coin bleu est attribuer a " << boxeur << endl;
			}
			else
			{
				this->CoinBleu = nullptr;
			}
		}
		else
		{
			cout << endl << "Ce boxers ne peut pas être dans ce coin, il est deja dans le coin oppose." << endl;
		}
	}

	void Combat::SetCoinRouge(Boxeur* boxeur)
	{
		if (boxeur != CoinBleu)
		{
			if (boxeur != nullptr)
			{
				this->CoinRouge = boxeur;
				cout << endl << "Le coin rouge est attribuer a " << boxeur << endl;
			}
			else
			{
				this->CoinRouge = nullptr;
			}
		}
		else
		{
			cout << endl << "Ce boxers ne peut pas être dans ce coin, il est deja dans le coin oppose." << endl;
		}
	}
	void Combat::DesignerVainqueur(Boxeur* boxeur)
	{

	}
}