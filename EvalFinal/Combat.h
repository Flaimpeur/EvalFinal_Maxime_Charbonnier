#pragma once
#include <string>
#include "Boxeur.h"
using namespace std;

namespace Boxeurs
{
	class Combat
	{
	private:
		string niveau;
		Boxeurs::Boxeur* CoinBleu = nullptr;
		Boxeurs::Boxeur* CoinRouge = nullptr;
	public:
		Combat(string niveau);
		virtual ~Combat();
		string GetNiveau();
		Boxeur* GetCoinBleu() { return this->CoinBleu; };
		Boxeur* GetCoinRouge() { return this->CoinRouge; };
		void SetCoinBleu(Boxeur* boxeur);
		void SetCoinRouge(Boxeur* boxeur);
		Boxeur* GetVainqueur();
		void DesignerVainqueur(Boxeur* boxeur);
	};
}

