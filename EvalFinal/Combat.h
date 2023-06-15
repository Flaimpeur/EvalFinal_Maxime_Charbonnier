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
		void SetCoinBleu(Boxeur*);
		void SetCoinRouge(Boxeur*);
		Boxeur* GetVainqueur();
		void DesignerVainqueur(Boxeur*);
	};
}

