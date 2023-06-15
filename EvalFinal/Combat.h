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
	public:
		Combat(string niveau);
		virtual ~Combat();
		string GetNiveau();
		Boxeur* GetCoinBleu();
		Boxeur* GetCoinRouge();
		void SetCoinBleu(Boxeur* boxeur);
		void SetCoinRouge(Boxeur* boxeur);
		Boxeur* GetVainqueur();
		void DesignerVainqueur(Boxeur* boxeur);
	};
}

